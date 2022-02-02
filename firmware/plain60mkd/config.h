/*
Copyright 2022 manzel

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x474C
#define PRODUCT_ID      0x5060
#define DEVICE_VER      0x0001
#define MANUFACTURER    MKD
#define PRODUCT         Plain60

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS {D0,D1,D2,D3,D5}
#define MATRIX_COL_PINS {D7,D6,D4,B4,B5,B6,C6,C7,F7,F6,F5,F4,F1,F0,E6}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define QMK_ESC_OUTPUT D7 // usually COL
#define QMK_ESC_INPUT D0 // usually ROW
