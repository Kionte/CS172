//
//  Even.cpp
//  Offline_HW2
//
//  Created by Kionté on 2/23/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "Even.h"

EvenNumber::EvenNumber() {
    input = 0;
}

EvenNumber::EvenNumber(int newInput) {
    input = newInput;
}

int EvenNumber::getValue() const { // returns value of input
    
    return input;
}

int EvenNumber::getNext() const { // returns next even value based off of input
    int nextInput = input; // creates copy of input so that original is not changed
    nextInput = nextInput + 2; // adds 2 to input
    return nextInput;
}

int EvenNumber::getPrevious()const { // returns previouse even number based off of input
    int previouseInput = input; // creates copy of input so that original is not changed
    previouseInput = previouseInput - 2; // subtracts 2 from input
    return previouseInput;
}