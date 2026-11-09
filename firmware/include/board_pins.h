// Every GPIO used by the firmware lives in this one file.
// Source: ../../circuit_and_components.md (sections 5 and 5D).
//
// IMPORTANT: the printed labels on your board win. Pin order on the P1/P3/P4 headers differs
// between board revisions. Confirm IO17 / IO18 are free on YOUR board during bench test A2.
#pragma once

// ---- Backlight ------------------------------------------------------------
#define PIN_BACKLIGHT_PWM 2

// ---- I2C bus (shared by the onboard GT911 touch controller and the DS3231 RTC) ----
#define PIN_I2C_SDA 19
#define PIN_I2C_SCL 20
#define I2C_ADDR_DS3231 0x68
#define I2C_ADDR_GT911_A 0x5D
#define I2C_ADDR_GT911_B 0x14

// ---- GT911 capacitive touch ------------------------------------------------
#define PIN_TOUCH_RST 38
// The touch INT line is not connected on most boards, so touch is polled.

// ---- Wake button, sensed through the 1N5819 diode (active LOW, INPUT_PULLUP) ----
#define PIN_WAKE_BUTTON 18

// ---- Battery level divider (2 x 1MOhm + 100nF), ADC2_CH6 ----
#define PIN_BATTERY_ADC 17

// ---- 800x480 16-bit parallel RGB panel (pre-wired on the PCB) ----
#define PIN_RGB_DE 41
#define PIN_RGB_VSYNC 40
#define PIN_RGB_HSYNC 39
#define PIN_RGB_PCLK 42
// Blue   B0..B4
#define PIN_RGB_B0 15
#define PIN_RGB_B1 7
#define PIN_RGB_B2 6
#define PIN_RGB_B3 5
#define PIN_RGB_B4 4
// Green  G0..G5
#define PIN_RGB_G0 9
#define PIN_RGB_G1 46
#define PIN_RGB_G2 3
#define PIN_RGB_G3 8
#define PIN_RGB_G4 16
#define PIN_RGB_G5 1
// Red    R0..R4
#define PIN_RGB_R0 14
#define PIN_RGB_R1 21
#define PIN_RGB_R2 47
#define PIN_RGB_R3 48
#define PIN_RGB_R4 45

#define DISPLAY_WIDTH 800
#define DISPLAY_HEIGHT 480
