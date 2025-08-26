#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H

// Bed leveling options
#define LEVELED_PLATE_SETUP
#define PROBE_SKIPPED_MIN_HEIGHT 0.1

// BLTouch settings
#define BLTOUCH_SET_5V_MODE
#define BLTOUCH_DELAY 500
#define BLTOUCH_FORCE_SW_MODE

// Filament runout sensor, if present
//#define FILAMENT_RUNOUT_SENSOR

// Input shaping (optional—only if you feel comfortable tuning it)
// #define INPUT_SHAPER
// #define SHAPER_FREQ_X 40
// #define SHAPER_FREQ_Y 40

// Linear Advance is NOT enabled (not recommended with silent boards)
// #define LIN_ADVANCE

#endif // CONFIGURATION_ADV_H
