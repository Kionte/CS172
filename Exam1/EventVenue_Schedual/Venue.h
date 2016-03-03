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
    Event schedualedEvents[12];
    int numEvents;
    
public:
    bool validTime(int time);
    void addEvent(int time, string name);
    Event findEvent(int time);
    Event findEvent(string name);
    
};

#endif /* Venue_h */
