//
//  Quadratic.h
//  Offline_HW2
//
//  Created by Kionté on 2/21/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef Quadratic_h
#define Quadratic_h

class QuadraticEquation {
    
private:
    int a; //value of a
    int b; // value of b
    int c; // value of c
    //Derek- This is good, but be careful using const, can be very bad, especially if its something that ever changes in the program somewhere.
public:
    int getA() const; // returns value of a
    int getB() const; // returns value of b
    int getC() const; // returns value of c
    
    double getDiscriminant() const; // returns the discriminant which is: b^2 - 4ac
    double getRoot1() const; // returns the first root of the equation
    double getRoot2() const; // returns the second root of the equation
    
    QuadraticEquation(int newA, int newB, int newC); // constructor to build equation
    
    
};

#endif /* Quadratic_h */
