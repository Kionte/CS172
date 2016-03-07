//
//  Quadratic.cpp
//  Offline_HW2
//
//  Created by Kionté on 2/21/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "Quadratic.h"
#include <cmath>

QuadraticEquation::QuadraticEquation(int newA, int newB, int newC) {
    // constructor gives a b and c new values
    a = newA;
    b = newB;
    c = newC;
}

int QuadraticEquation::getA()const { //returns the value of a
    return a;
}

int QuadraticEquation::getB() const { // returns the value of b
    return b;
}

int QuadraticEquation::getC() const { // returns the value of c
    return c;
}

double QuadraticEquation::getDiscriminant() const { // find discriminant of inputs
    double discriminant; // initialize the discriminat
    
    discriminant = (b *b) - (4*a*c); // sovles for discriminant
    
    return discriminant; // returns discriminant
}

double QuadraticEquation::getRoot1() const { // root 1 of equation
    double root1; // var to place answer
    
    root1 = ((-b) + sqrt(b *b - (4*a*c)))/(2*a); // formula to solve
    
    
    return root1;
}
double QuadraticEquation::getRoot2() const {
    double root2; // var to place answer
    
    root2 = ((-b) - sqrt(b *b - (4*a*c)))/(2*a); // formula to solve
    
    
    return root2;
}