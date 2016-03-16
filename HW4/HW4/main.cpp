//
//  main.cpp
//  HW4
//
//  Created by Kionté on 3/15/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main() {
    RegularPolygon Polygon1; // creat object polygon #1
    cout << "Regular Polygon #1: " << endl;
    cout << "Area: " << Polygon1.getArea() << endl; // out put area
    cout << "Perimeter: " << Polygon1.getPrimeter() << endl << endl; // out put perimeter
    
    RegularPolygon Polygon2(6,4); // create object polygon #2
    cout << "Regular Polygon #2: " << endl;
    cout << "Area: " << Polygon2.getArea() << endl; // output area
    cout << "Perimeter: " << Polygon2.getPrimeter() << endl << endl; // out put perimieter
    
    RegularPolygon Polygon3(10,4,5.6,7.8); // create object polygon #3
    cout << "Regular Polygon #3: " << endl;
    cout << "Area: " << Polygon3.getArea() << endl; //out put area
    cout << "Perimeter: " << Polygon3.getPrimeter() << endl << endl; // output perimiter

    
    return 0;
}
