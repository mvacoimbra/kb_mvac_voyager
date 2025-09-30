#pragma once

// handedness config (chose only one)
#define MASTER_LEFT
// or use: #define EE_HANDS (but not both)

// Serial communication for split
#define USE_SERIAL

// USB detection (works well with MASTER_LEFT)
#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT 5000

// Watchdog to detect disconnects
#define SPLIT_WATCHDOG_ENABLE

// Mod-tap delay
// #define TAPPING_TERM 200
