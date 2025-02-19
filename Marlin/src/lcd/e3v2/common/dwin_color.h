/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define RGB(R,G,B)  (R << 11) | (G << 5) | (B) // R,B: 0..31; G: 0..63
#define GetRColor(color) ((color >> 11) & 0x1F)
#define GetGColor(color) ((color >>  5) & 0x3F)
#define GetBColor(color) ((color >>  0) & 0x1F)

// Default Colors
#define COLOR_WHITE         0xFFFF
#define COLOR_YELLOW        RGB(0x1F,0x3F,0x00)
#define COLOR_RED           RGB(0x1F,0x00,0x00)
#define COLOR_ERROR_RED     0xB000  // Error!
#define COLOR_BG_RED        0xF00F  // Red background color
#define COLOR_BG_WINDOW     0x31E8  // Popup background color
#define COLOR_BG_BLUE       0x1125  // Dark blue background color
#define COLOR_BG_BLACK      0x0841  // Black background color
#define COLOR_ICONBLUE      0x45FA  // Lighter blue that matches icons/accents
#define COLOR_POPUP_TEXT    0xD6BA  // Popup font background color
#define COLOR_LINE          0x3A6A  // Split line color
#define COLOR_RECTANGLE     0xEE2F  // Blue square cursor color
#define COLOR_PERCENT       0xFE29  // Percentage color
#define COLOR_BARFILL       0x10E4  // Fill color of progress bar
#define COLOR_SELECT        0x33BB  // Selected color

// Extended Colors
#define COLOR_BLACK           0
#define COLOR_GREEN           RGB(0,63,0)
#define COLOR_AQUA            RGB(0,63,31)
#define COLOR_BLUE            RGB(0,0,31)
#define COLOR_LIGHT_WHITE     0xBDD7
#define COLOR_LIGHT_GREEN     0x3460
#define COLOR_CYAN            0x07FF
#define COLOR_LIGHT_CYAN      0x04F3
#define COLOR_LIGHT_BLUE      0x3A6A
#define COLOR_MAGENTA         0xF81F
#define COLOR_LIGHT_MAGENTA   0x9813
#define COLOR_LIGHT_RED       RGB(31,31,15)
#define COLOR_ORANGE          0xFA20
#define COLOR_LIGHT_ORANGE    0xFBC0
#define COLOR_LIGHT_YELLOW    0x8BE0
#define COLOR_BROWN           0xCC27
#define COLOR_LIGHT_BROWN     0x6204
#define COLOR_GREY            0x18E3

// Default UI Colors
#define defColorBackground  RGB( 0, 8, 6)
#define defColorCursor      RGB(20, 49, 31)
#define defColorTitleBg     RGB( 0, 23, 16)
#define defColorTitleTxt    COLOR_WHITE
#define defColorText        COLOR_WHITE
#define defColorSelected    COLOR_SELECT
#define defColorSplitLine   RGB( 0, 23, 16)
#define defColorHighlight   COLOR_WHITE
#define defColorStatusBg    RGB( 0, 23, 16)
#define defColorStatusTxt   COLOR_YELLOW
#define defColorPopupBg     COLOR_BG_WINDOW
#define defColorPopupTxt    COLOR_POPUP_TEXT
#define defColorAlertBg     COLOR_BG_RED
#define defColorAlertTxt    COLOR_YELLOW
#define defColorPercentTxt  COLOR_PERCENT
#define defColorBarfill     COLOR_BARFILL
#define defColorIndicator   COLOR_WHITE
#define defColorCoordinate  COLOR_WHITE
#define defColorButton      RGB( 0, 23, 16)
