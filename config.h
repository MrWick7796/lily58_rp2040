/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* Select hand configuration */

// #define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

#define SPLIT_USB_DETECT

// Enable double tap reset button to enter bootloader feature for RP2040. 
// This feature is intended for standard RP2040 controllers which require 2 buttons (Reset & Boot) to enter bootloader, e.g. Splinky. 
// Comment out these lines when using RP2040 controllers with single button reset / bootloader circuit, e.g. Sea Picro. 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

#undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19

// Set handedness by EEPROM. 
// #define EE_HANDS
// #define SPLIT_HAND_PIN

// Setup I2C Driver for OLED.
// Peripheral I2C0 uses Driver I2CD0; Peripheral I2C1 uses Driver I2CD1.
// In mcuconf.h, Peripheral I2C1 is enabled, therefore Driver I2CD1 is used.
#undef I2C_DRIVER
#define I2C_DRIVER I2CD1

#undef I2C1_SDA_PIN
#define I2C1_SDA_PIN GP2

#undef I2C1_SCL_PIN
#define I2C1_SCL_PIN GP3


