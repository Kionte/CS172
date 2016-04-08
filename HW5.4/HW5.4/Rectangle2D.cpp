//
//  Rectangle2D.cpp
//  HW5.4
//
//  Created by Kionté on 4/7/16.
//  Copyright © 2016 Kionté. All rights reserved.
//


#include "Rectangle2D.h"


Rectangle2D::Rectangle2D() { // default construct
    originalX = 0;
    originalY = 0;
    width = 1;
    height = 1;
}
Rectangle2D::Rectangle2D(double newX, double newY, double newWidth, double newHeight) { // custom constructor
    originalX = newX; // x = whatever the user inputs
    originalY = newY; // y = whatever the user inputs
    width = newWidth; // width = whatever the user inputs
    height = newHeight; // height = whatever teh user inputs
}


double Rectangle2D::getX() const {//gettters------------------
    return originalX; // gets the value of x
}
double Rectangle2D::getY() const {
    return originalY; // gets the value of y
}
double Rectangle2D::getWidth() const {
    return width; // gets the value of width
}
double Rectangle2D::getHeight() const {
    return height; // gets the value of height
}

void Rectangle2D::setX(double newX) const {// setters-------------------
    newX = originalX; // sets in a new value for x
}
void Rectangle2D::setY(double newY) const {
    newY = originalY; // sets in a new value for  y
}
void Rectangle2D::setWidth(double newWidth) const {
    newWidth = width; // sets in a new value for  width
}
void Rectangle2D::setHeight(double newHeight) const {
    newHeight = height; // sets in a new value for  height
}

double Rectangle2D::getArea() const { // special gets-----------------
    double area = width * height;
    return area; //returns the area of the rectanlge
}
double Rectangle2D::getPerimiter() const
{
    double Perimeter = 2 * width + 2 * height;
    return Perimeter; // returns the perimiter of the rectangle
}
bool Rectangle2D::contains(double x, double y) const
{
    int count = 0;
    if (x <= (originalX + .5*width) && x >= (originalX - .5*width)) //check width
        count++;
    if (y <= (y + .5*height) && y >= (y - .5*height)) //check height
        count++;
    
   
    if (count < 2)
        return false;
    else
    return true;
}
bool Rectangle2D::contains(const Rectangle2D &r) const
{
    int count = 0;
    if ((originalX + .5*width) <= (originalX + .5*width) && (originalX - .5*width) >= (originalX - .5*width)) //check width
        count++;
    if ((originalY + .5*width) <= (originalY + .5*height) && (originalY - .5*height) >= (originalY - .5*height)) //check height
        count++;
    
   
    if (count < 2)
        return false;
    else
        return true;
}
bool Rectangle2D::overLaps(const Rectangle2D &r) const
{
    int count = 0;
    if ((originalX + .5*width) <= (originalX + .5*width) && (originalX - .5*width) >= (originalX - .5*width)) //check width
        count++;
    if ((originalY + .5*width) <= (originalY + .5*height) && (originalY - .5*height) >= (originalY - .5*height)) //checkheight
        count++;
    
       if (count < 1)
        return false;
       else
        return true;
}




