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
    bool timeIsValid = true; // starts off true
    
    for(int i=0;i<=12;i++) { // loop used to check all locations in array
        if(time == schedualedEvents[i].getTime()) {//loop checks user (time) input with the rest of the array
            timeIsValid = false; // if there is a match return true
        }
    }
    return timeIsValid; // return results form loop
}

Event Venue::findEvent(int time) { // used to get title of event
    if(schedualedEvents[time].getTitle() != "free time") { // if the searched event != empty
       
        return schedualedEvents[time]; // return the title  of the event
    }
    else {
        Event noMatch; // object created to later show if there is a empty location
        return noMatch; // returns defaultl constructor
    }
}


Event Venue::findEvent(string name) { // used to get time of event
    for(int i =0; i <= 12; i++) {
        if(schedualedEvents[i].getTitle() == name) { // if event name equals searched name
        
        return schedualedEvents[i];  // returns time of event
        }
        
    }
    Event noMatch; // object created to later show if there is a empty location
    return noMatch; // returns default construct
}





void Venue::addEvent(int time, string name) { // function is used to add events
    if(validTime(time) == true) { // if there is a open space in desred location
        schedualedEvents[time].setTime(time); // set the time of that location to user input
        schedualedEvents[time].setTitle(name); // set the time of that location to user input
        cout << "Event Schedualed!" << endl; // let user know event was added
    }
    else {
        cout << "Couldn't schedule event :(" << endl; // let user know event was taken
    }

}