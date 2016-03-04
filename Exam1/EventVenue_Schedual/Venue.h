//
//  Venue.h
//  EventVenue_Schedual
//
//  Created by Kionté on 3/3/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef Venue_h
#define Venue_h
#include "Event.h"

class Venue {
    
private:
    Event schedualedEvents[12]; // array hold all of the envents
    int numEvents; // ????????????????????????____havnt used?____???????????????????_______________????????
    bool validTime(int time); // checks througout the array to see if the time is valid
public:
    
    void addEvent(int time, string name); // adds event to array
    Event findEvent(int time); // searches array to find event with same time | output will be name
    Event findEvent(string name); // searches array to find the event with same name | output will be time
    
};

#endif /* Venue_h */
