#include <Arduino.h>
#include "IRread.h" 

#define MIN_TANK_VOLUME_A 49.7  // SAE J2601 CHSS minimum required volume

// Function prototypes
bool checkMinTankVolume(const CHSS &chss);

#endif