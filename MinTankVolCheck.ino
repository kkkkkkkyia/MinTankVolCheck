#include "MinTankVolCheck.h"

bool CheckMinTankVolume(const CHSS &chss){
    if (chss.tankVol > MIN_TANK_VOLUME){
        Serial.println("CHSS volume check passed: Tank volume is sufficient.")
        return true;
    }else{
        Serial.println("CHSS volume check failed: Tank volume is too low.")
        return false;
    }
}