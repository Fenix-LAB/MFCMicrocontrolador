#pragma once
#include "SerialClass.h"
class CEsp32 
{
private:

public:
    bool Conection();
    void OnLed();
    void OffLed();
    bool GetSensor();
    void SetPWM(int);
    void SetServo(int);
};

