/**
 * Configuration_adv.h for Ender 3 Max Neo + Sprite Pro + CR Touch + 4.2.2
 * Marlin 2.1.x
 */

// -------------------- EEPROM --------------------
#define EEPROM_SETTINGS
#define EEPROM_AUTO_INIT

// -------------------- Motion Settings --------------------
#define JUNCTION_DEVIATION
#define LIN_ADVANCE

// -------------------- Bed Leveling Helpers --------------------
#define BABYSTEPPING
#define BABYSTEP_ZPROBE_OFFSET
#define DOUBLECLICK_FOR_Z_BABYSTEPPING
#define BABYSTEP_MULTIPLICATOR_Z 5

// -------------------- Probe / Homing --------------------
#define Z_AFTER_PROBING 10   // Raise nozzle after probing

// -------------------- Thermal Protection --------------------
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_BED

// -------------------- Filament --------------------
#define ADVANCED_PAUSE_FEATURE
#define PARK_HEAD_ON_PAUSE
#define FILAMENT_LOAD_UNLOAD_GCODES
