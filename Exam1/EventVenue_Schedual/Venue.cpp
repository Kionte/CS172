//
//  Venue.cpp
//  EventVenue_Schedual
//
//  Created by Kionté on 3/3/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "Venue.h"
#include <iostream>

bool Venue::validTime(int time) {
    bool timeIsValid = true;
    
    for(int i=0;i<=12;i++) {
        if(time == schedualedEvents[i].getTime()) {
            timeIsValid = false;
        }
    }
    return timeIsValid;
}

Event Venue::findEvent(int time) { // used to get title of event
    if(schedualedEvents[time].getTitle() != "free time") {
       
        return Venue::schedualedEvents[time];
    }
    else {
     
        return Event();
    }
}


Event Venue::findEvent(string name) { // used to get time of event
    for(int i =0; i <= 12; i++) {
        if(schedualedEvents[i].getTitle() == name) {
        
        return schedualedEvents[i];
        }
    }
    
        return Event();
    
    
}





void Venue::addEvent(int time, string name) {
    if(validTime(time) == true) {
        schedualedEvents[time].setTime(time);
        schedualedEvents[time].setTitle(name);
        cout << "Event Schedualed!" << endl;
    }
    else {
        cout << "Time already taken :(" << endl;
    }

}