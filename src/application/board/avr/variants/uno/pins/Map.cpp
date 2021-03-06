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

#include "Map.h"

mcuPin_t dInPins[MAX_NUMBER_OF_BUTTONS] =
{
    {
        .port = &DI_1_PORT,
        .pin = DI_1_PIN,
    },

    {
        .port = &DI_2_PORT,
        .pin = DI_2_PIN,
    },

    {
        .port = &DI_3_PORT,
        .pin = DI_3_PIN,
    },

    {
        .port = &DI_4_PORT,
        .pin = DI_4_PIN,
    },

    {
        .port = &DI_5_PORT,
        .pin = DI_5_PIN,
    },

    {
        .port = &DI_6_PORT,
        .pin = DI_6_PIN,
    }
};

mcuPin_t dOutPins[MAX_NUMBER_OF_LEDS] =
{
    {
        .port = &DO_1_PORT,
        .pin = DO_1_PIN,
    },

    {
        .port = &DO_2_PORT,
        .pin = DO_2_PIN,
    },

    {
        .port = &DO_3_PORT,
        .pin = DO_3_PIN,
    },

    {
        .port = &DO_4_PORT,
        .pin = DO_4_PIN,
    },

    {
        .port = &DO_5_PORT,
        .pin = DO_5_PIN,
    },

    {
        .port = &DO_6_PORT,
        .pin = DO_6_PIN,
    }
};
