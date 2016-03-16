//
//  RegularPolygon.h
//  HW4
//
//  Created by Kionté on 3/15/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef RegularPolygon_h
#define RegularPolygon_h

class RegularPolygon {

private:

int n; // number of side
double side; // len of sides
double x; // x cord
double y; // y cord

public:

const int getN(); // defines the number of sides
const double getSide(); // stores the length of the side
const double GetX(); // get the x cordinate that defines the center of the polygon
const double GetY(); // get the y cordinate that defines the center of the polygon
const double getPrimeter(); // get the perimiter of the polygon
const double getArea(); // get area of polygon
const void setN(); // sets the new number of sides
const void setSide(); // sets the new length if the sides
const void setX(); // sets the new co of x
const void setY(); // sets the new co of y

RegularPolygon(); // defualt constructor
RegularPolygon(int numOfSides, double lenOfSides); // custom number of sides and length of sides
RegularPolygon(int numOfSides, double lenOfSides, double xCo, double yCo); // cusotom n,sides,x,y
};
#endif /* RegularPolygon_h */
