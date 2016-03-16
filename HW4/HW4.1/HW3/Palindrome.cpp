//
//  Palindrome.cpp
//  HW3
//
//  Created by Kionté on 3/8/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "Palindrome.h"


Palindrome::Palindrome() {
    top = -1;
}
bool Palindrome::isEmpty() {
    bool emptyStack = true;
    
    for(int i = 0; i < 100; i++) {
        if(letters[i] != 0) {
            emptyStack = false;
            return emptyStack;
        }
    }
    return emptyStack;
}

void Palindrome::push(char value) {
   letters[top] = value;
}

void Palindrome::pop() {

    letters[top--] = 0;
}

