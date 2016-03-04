//
//  Event.h
//  EventVenue_Schedual
//
//  Created by Kionté on 3/3/16.
//  Copyright © 2016 Kionté. All rights reserved.
//


#ifndef Event_h
#define Event_h
#include <string>
using namespace std;

class Event {
  
private:
    int Time; // variable for time of event
    string Title; // variable for name of event
    
public:
    Event(); // default constructor
    Event(int time,string name); // custom constructor
    
    int getTime() const; // gets the time form the private var
    string getTitle() const; // gets the name of the event form the private var
    
    void setTime(int newTime); // changes the time of the event
    void setTitle(string newName); // changes the name of the event
    
};
#endif /* Event_h */
