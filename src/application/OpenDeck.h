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

#pragma once

#include "midi/src/MIDI.h"
#include "sysExConf/SysExConf.h"

///
/// \brief External definition of MIDI class instance.
///
extern MIDI     midi;

///
/// \brief External definition of processingEnabled variable.
/// Used to prevent updating states of all components (analog, LEDs, encoders, buttons).
/// This variable can be used in various modules so because of that it's defined as external.
///
extern bool     processingEnabled;

///
/// \brief Enumeration holding all possible MIDI clock states.
///
typedef enum
{
    midiClockStop,
    midiClockNoChange,
    midiClockChange,
    midiClockReset
} midiClockStatus_t;

extern midiClockStatus_t midiClockStatus;