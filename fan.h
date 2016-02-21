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
    void changeSpped(); // allows user to change the speed of the fan
    void changeOn(); // allows user to change status of the fan
    void changeRadis(); // allows user to change the radius of the fan 
    
    
    Fan() { // default settings for the fan 
        speed = 1;
        on = false;
        radius = 5;
    }
    
};

#endif /* Header_h */
