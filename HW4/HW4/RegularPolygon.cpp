//
//  RegularPolygon.cpp
//  HW4
//
//  Created by Kionté on 3/15/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include "RegularPolygon.h"
#include "cmath"

RegularPolygon::RegularPolygon() { // default constructor
    x = 0;
    y = 0;
    n = 3;
    side = 1;
   
}

RegularPolygon::RegularPolygon(int newN, double newSide) { // customize number of sides and length of side but default x and y
    x = 0;
    y = 0;
    n = newN;
    side = newSide;
}

RegularPolygon::RegularPolygon(int newN, double newSide, double newX, double newY) { // customize number of sides length of sindes x and y 
    x = newX;
    y = newY;
    n = newN;
    side = newSide;
}
///Getters
const int RegularPolygon::getN() {// defines the number of sides
    return n;
}
const double RegularPolygon::getSide(){// stores the length of the side
    return side;
} 
const double RegularPolygon::GetX() {// get the x cordinate that defines the center of the polygon
    return x;
}
const double RegularPolygon::GetY() {// get the y cordinate that defines the center of the polygon
    return y;
}
const double RegularPolygon::getPrimeter(){// get the perimiter of the polygon
    return (n*side);
} 
const double RegularPolygon::getArea(){// get area of polygon
    return ((n*(side*side))/(4*tan(3.141592654/n)));
}
///Setters
const void RegularPolygon::setN(){// sets the new number of sides
   
} 
const void RegularPolygon:: setSide() {// sets the new length if the sides
    
}
const void RegularPolygon::setX() {// sets the new co of x
    
}
const void RegularPolygon::setY(){// sets the new co of y
    
}






