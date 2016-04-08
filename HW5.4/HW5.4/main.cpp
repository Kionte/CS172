//
//  main.cpp
//  HW5.4
//
//  Created by Kionté on 4/7/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main() {
    Rectangle2D r1(2,2,5.5,4.9); // creates object r1
    Rectangle2D r2(4,5,10.5,3.2); // creates object r2
    Rectangle2D r3(3,5,2.3,5.4); // creates object r3
    
    cout << "The area is: " << r1.getArea() << endl; // out puts area
    cout << "The perimiteris: " << r1.getPerimiter() << endl; // ouputs perimiter
    cout << r1.contains(3, 3) << endl; // out puts true or false if point is in rect
    cout << r1.contains(r2) << endl; // outputs true or false if rect is in rect
    cout << r1.overLaps(r3) << endl; // out puts true or false if rect overlaps rect
    return 0;
}
