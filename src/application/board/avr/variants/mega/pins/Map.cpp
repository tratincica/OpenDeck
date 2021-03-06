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
    },

    {
        .port = &DI_7_PORT,
        .pin = DI_7_PIN,
    },

    {
        .port = &DI_8_PORT,
        .pin = DI_8_PIN,
    },

    {
        .port = &DI_9_PORT,
        .pin = DI_9_PIN,
    },

    {
        .port = &DI_10_PORT,
        .pin = DI_10_PIN,
    },

    {
        .port = &DI_11_PORT,
        .pin = DI_11_PIN,
    },

    {
        .port = &DI_12_PORT,
        .pin = DI_12_PIN,
    },

    {
        .port = &DI_13_PORT,
        .pin = DI_13_PIN,
    },

    {
        .port = &DI_14_PORT,
        .pin = DI_14_PIN,
    },

    {
        .port = &DI_15_PORT,
        .pin = DI_15_PIN,
    },

    {
        .port = &DI_16_PORT,
        .pin = DI_16_PIN,
    },

    {
        .port = &DI_17_PORT,
        .pin = DI_17_PIN,
    },

    {
        .port = &DI_18_PORT,
        .pin = DI_18_PIN,
    },

    {
        .port = &DI_19_PORT,
        .pin = DI_19_PIN,
    },

    {
        .port = &DI_20_PORT,
        .pin = DI_20_PIN,
    },

    {
        .port = &DI_21_PORT,
        .pin = DI_21_PIN,
    },

    {
        .port = &DI_22_PORT,
        .pin = DI_22_PIN,
    },

    {
        .port = &DI_23_PORT,
        .pin = DI_23_PIN,
    },

    {
        .port = &DI_24_PORT,
        .pin = DI_24_PIN,
    },

    {
        .port = &DI_25_PORT,
        .pin = DI_25_PIN,
    },

    {
        .port = &DI_26_PORT,
        .pin = DI_26_PIN,
    },

    {
        .port = &DI_27_PORT,
        .pin = DI_27_PIN,
    },

    {
        .port = &DI_28_PORT,
        .pin = DI_28_PIN,
    },

    {
        .port = &DI_29_PORT,
        .pin = DI_29_PIN,
    },

    {
        .port = &DI_30_PORT,
        .pin = DI_30_PIN,
    },

    {
        .port = &DI_31_PORT,
        .pin = DI_31_PIN,
    },

    {
        .port = &DI_32_PORT,
        .pin = DI_32_PIN,
    },
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
    },

    {
        .port = &DO_7_PORT,
        .pin = DO_7_PIN,
    },

    {
        .port = &DO_8_PORT,
        .pin = DO_8_PIN,
    },

    {
        .port = &DO_9_PORT,
        .pin = DO_9_PIN,
    },

    {
        .port = &DO_10_PORT,
        .pin = DO_10_PIN,
    },

    {
        .port = &DO_11_PORT,
        .pin = DO_11_PIN,
    },

    {
        .port = &DO_12_PORT,
        .pin = DO_12_PIN,
    },

    {
        .port = &DO_13_PORT,
        .pin = DO_13_PIN,
    },

    {
        .port = &DO_14_PORT,
        .pin = DO_14_PIN,
    },

    {
        .port = &DO_15_PORT,
        .pin = DO_15_PIN,
    },

    {
        .port = &DO_16_PORT,
        .pin = DO_16_PIN,
    }
};