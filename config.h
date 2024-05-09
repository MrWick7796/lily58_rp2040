#pragma once

#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

// Enable double tap reset button to enter bootloader feature for RP2040. 
// This feature is intended for standard RP2040 controllers which require 2 buttons (Reset & Boot) to enter bootloader, e.g. Splinky. 
// Comment out these lines when using RP2040 controllers with single button reset / bootloader circuit, e.g. Sea Picro. 
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17

// Force master side determination by VBUS (USB voltage) detect method instead of the default USB data detect method. 
// RP2040 controllers like Splinky and Sea Picro have working VBUS detect on GP19 pin. 
// #undef SPLIT_USB_DETECT
#define USB_VBUS_PIN GP19

// Set handedness by EEPROM. 
// #define EE_HANDS
// #define SPLIT_HAND_PIN

// Setup Serial USART Half-duplex mode for communication between the two halves. By default this will use PIO0 peripheral. 
#define SERIAL_USART_TX_PIN GP1

// Setup I2C Driver for OLED.
// Peripheral I2C0 uses Driver I2CD0; Peripheral I2C1 uses Driver I2CD1.
// In mcuconf.h, Peripheral I2C1 is enabled, therefore Driver I2CD1 is used.
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3


