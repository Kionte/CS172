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

Event::Event() {
    int Time = -1;
    string name = "free time";
}
Event::Event(int time,string name) {
    Title = name;
    Time = time;
}

int Event::getTime() const {
    return Time;
}

string Event::getTitle() const {
    return Title;
}

void Event::setTime(int newTime) {
    Time = newTime;
}

void Event::setTitle(string newName) {
    Title = newName;
}