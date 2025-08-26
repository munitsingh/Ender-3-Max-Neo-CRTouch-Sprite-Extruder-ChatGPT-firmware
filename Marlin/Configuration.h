#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// Basic setup
#define MOTHERBOARD BOARD_CREALITY_V4_2_2
#define SERIAL_PORT -1
#define BAUDRATE 115200

// Bed dimensions
#define X_BED_SIZE 300
#define Y_BED_SIZE 300

// Sprite Pro direct drive offsets + CR Touch
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET { -44, -6, 0 }

// Homing & Bed Leveling
#define ENABLE_LEVELING_AFTER_HOMING
#define AUTO_BED_LEVELING_BILINEAR
#define GRID_MAX_POINTS_X 5
#define Z_SAFE_HOMING
#define RESTORE_LEVELING_AFTER_G28

// EEPROM
#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

// MPC (Model Predictive Control)
#define MPC

// Motion settings can stay default unless adjusted
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
#define DEFAULT_MAX_FEEDRATE          { 500, 500, 5, 25 }
#define DEFAULT_MAX_ACCELERATION      { 500, 500, 100, 3000 }

#endif // CONFIGURATION_H
