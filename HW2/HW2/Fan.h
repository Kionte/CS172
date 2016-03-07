//
//  fan.h
//  HW2
//
//  Created by Kionté on 2/18/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef fan_h
#define fan_h

class Fan {
    
private:
    int speed; // speed of the fan 1,2,3
    bool on; // weather the fan is on or off
    double radius; // determines the size of the fan
    
    
public:
    int getSpeed() const; // returns the speed
    bool getOn() const; // returns if is on or off
    double getRadius() const; // returns the radius of the fan
    
    void setSpeed(int); // change the value of speed
    void setOn(bool); // change the status of 'on'
    void setRadius(double); // change the value of radius
    
    
    Fan(); // default settings for the fan
    Fan(int newSpeed, bool newOn, double newRadius); //customized settings for the fan
    
};

#endif /* Header_h */