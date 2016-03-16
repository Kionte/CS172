//
//  Palindrome.h
//  HW3
//
//  Created by Kionté on 3/8/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef Palindrome_h
#define Palindrome_h
#include <stack>

class Palindrome {
    
private:
    char letters[100];
    char top = -1;
public:
    
    Palindrome(); // constructor 
    bool isEmpty(); // checks if stack if empty
    void pop(); //removes the top variable from the array
    //void push(char value); // adds the next variable to the top of top of the array
    std::stack<std::string> silly;
    silly.push();
    
};

#endif /* Palindrome_h */
