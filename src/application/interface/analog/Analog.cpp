/*
    OpenDeck MIDI platform firmware
    Copyright (C) 2015-2018 Igor Petrovic

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Analog.h"
#include "Variables.h"

uint16_t        lastAnalogueValue[MAX_NUMBER_OF_ANALOG];
uint8_t         fsrPressed[MAX_NUMBER_OF_ANALOG/8+1];
uint8_t         analogEnabled[MAX_NUMBER_OF_ANALOG/8+1];
uint8_t         analogInverted[MAX_NUMBER_OF_ANALOG/8+1];
analogType_t    analogType[MAX_NUMBER_OF_ANALOG];


///
/// \brief Checks if analog component is enabled or disabled.
/// @param [in] analogID    Index of analog component being checked.
/// \returns True if component is enabled, false otherwise.
///
inline bool isAnalogEnabled(uint8_t analogID)
{
    uint8_t arrayIndex = analogID/8;
    uint8_t analogIndex = analogID - 8*arrayIndex;

    return BIT_READ(analogEnabled[arrayIndex], analogIndex);
}

///
/// \brief Default constructor.
///
Analog::Analog()
{

}

///
/// \brief Used to store specific parameters from EEPROM to internal arrays for faster access.
///
void Analog::init()
{
    for (int i=0; i<MAX_NUMBER_OF_ANALOG; i++)
    {
        uint8_t arrayIndex = i/8;
        uint8_t analogIndex = i - 8*arrayIndex;

        BIT_WRITE(analogEnabled[arrayIndex], analogIndex, database.read(DB_BLOCK_ANALOG, dbSection_analog_enable, i));
        BIT_WRITE(analogInverted[arrayIndex], analogIndex, database.read(DB_BLOCK_ANALOG, dbSection_analog_invert, i));
        analogType[i] = (analogType_t)database.read(DB_BLOCK_ANALOG, dbSection_analog_type, i);
    }
}

void Analog::update()
{
    if (!board.analogDataAvailable())
        return;

    //check values
    for (int i=0; i<MAX_NUMBER_OF_ANALOG; i++)
    {
        //don't process component if it's not enabled
        if (!isAnalogEnabled(i))
            continue;

        int16_t analogData = board.getAnalogValue(i);

        if (analogType[i] != aType_button)
        {
            switch(analogType[i])
            {
                case aType_potentiometer_cc:
                case aType_potentiometer_note:
                case aType_NRPN_7:
                case aType_NRPN_14:
                case aType_PitchBend:
                checkPotentiometerValue(analogType[i], i, analogData);
                break;

                case aType_fsr:
                checkFSRvalue(i, analogData);
                break;

                default:
                break;
            }
        }
        else
        {
            if (analogData == -1)
            {
                continue;
            }

            bool state = analogData > DIGITAL_VALUE_THRESHOLD;
            buttons.processButton(i+MAX_NUMBER_OF_BUTTONS, state);
        }
    }

    board.continueADCreadout();
}

void Analog::debounceReset(uint16_t index)
{
    lastAnalogueValue[index] = 0;

    uint8_t arrayIndex = index/8;
    uint8_t fsrIndex = index - 8*arrayIndex;

    BIT_CLEAR(fsrPressed[arrayIndex], fsrIndex);
}

Analog analog;
