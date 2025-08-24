/**
 * Configuration.h for Ender 3 Max Neo + Sprite Pro + 4.2.2
 * Thermistor: T1 (EPCOS 100k)
 */

#define CONFIG_EXAMPLES_DIR "Creality/Ender-3 Max Neo"

// Electronics
#define MOTHERBOARD BOARD_CREALITY_V4
#define SERIAL_PORT 1
#define BAUDRATE 115200

// Mechanics
#define X_BED_SIZE 300
#define Y_BED_SIZE 300
#define Z_MAX_POS 320

// Endstops
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

// Filament
#define FILAMENT_RUNOUT_SENSOR
#define NUM_RUNOUT_SENSORS 1

// Thermal
#define TEMP_SENSOR_0 1      // T1 EPCOS 100k
#define TEMP_SENSOR_BED 1
#define HEATER_0_MAXTEMP 300
#define BED_MAXTEMP 120

// Motion
#define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 424.9 }
#define DEFAULT_MAX_FEEDRATE          { 500, 500, 10, 50 }
#define DEFAULT_MAX_ACCELERATION      { 500, 500, 100, 1000 }

// Probe & Leveling
#define BLTOUCH
#define NOZZLE_TO_PROBE_OFFSET { -43, -6, 0 }
#define AUTO_BED_LEVELING_BILINEAR
#define Z_SAFE_HOMING
#define RESTORE_LEVELING_AFTER_G28
#define GRID_MAX_POINTS_X 5
#define GRID_MAX_POINTS_Y 5

// EEPROM
#define EEPROM_SETTINGS
#define EEPROM_AUTO_INIT

// Display
#define DWIN_CREALITY_LCD
