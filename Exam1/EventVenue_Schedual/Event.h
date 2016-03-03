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
    int Time;
    string Title;
    
public:
    Event(); // default constructor
    Event(int time,string name); // custom constructor
    
    int getTime() const;
    string getTitle() const;
    
    void setTime(int newTime);
    void setTitle(string newName);
    
};
#endif /* Event_h */
