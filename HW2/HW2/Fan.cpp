//
//  fan.cpp
//  Offline_HW2
//
//  Created by Kionté on 2/21/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "fan.h"


Fan::Fan() { // default constructor settings for the fan
    speed = 1;
    on = false;
    radius = 5;
}
Fan::Fan(int newSpeed, bool newOn, double newRadius) { //customized constructor settings for the fan
    speed = newSpeed;
    on = newOn;
    radius = newRadius;
}


int Fan::getSpeed() const { // returns speed
    return speed;
}
bool Fan::getOn() const { // returns on or off
    return on;
}
double Fan::getRadius() const { // returns radius
    return radius;
}

void Fan::setSpeed(int newSpeed) { // if value is possible then set speed
    speed = (newSpeed >= 0) ? newSpeed : 0;
}
void Fan::setOn(bool newOn) { // if an option than set on or off
    on = newOn;
}
void Fan::setRadius(double newRadius) { // if value is possible set radius
    radius = (newRadius >= 0) ? newRadius : 0;
}