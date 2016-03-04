//
//  Event.cpp
//  EventVenue_Schedual
//
//  Created by Kionté on 3/3/16.
//  Copyright © 2016 Kionté. All rights reserved.
//


#include "Event.h"
#include <string>


using namespace std;


Event::Event(int time,string name) {
    Title = name; // user input will equal title
    Time = time; // user input will equal time
}

Event::Event() {
    Time = -1; // default time
    Title = "free"; // default title
}
int Event::getTime() const { // retrieves time from Event object
    return Time;
}

string Event::getTitle() const { // gets time from Event object
    return Title;
}

void Event::setTime(int newTime) { // sets a new value for time
    Time = newTime;
}

void Event::setTitle(string newName) { // sets a new value for time
    Title = newName;
}