//
//  Even.h
//  Offline_HW2
//
//  Created by Kionté on 2/23/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef Even_h
#define Even_h

class EvenNumber {
    
private:
    
    int input; // represents the integer value stored in the object
    
public:
    
    int getValue() const; // returns the variable input
    int getNext() const; // returns the 'EvenNumber' objects successor
    int getPrevious() const; // returns the 'EvenNumber' objects predessor
    
    
    
    EvenNumber();
    
    EvenNumber(int newInput);
    
};

#endif /* Even_h */
