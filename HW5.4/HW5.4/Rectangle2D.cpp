//
//  Rectangle2D.cpp
//  HW5.4
//
//  Created by Kionté on 4/7/16.
//  Copyright © 2016 Kionté. All rights reserved.
//


#include "Rectangle2D.h"


Rectangle2D::Rectangle2D() {
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}
Rectangle2D::Rectangle2D(double newX, double newY, double newWidth, double newHeight) {
    newX = x;
    newY = y;
    newWidth = width;
    newHeight = height;
}


double Rectangle2D::getX() const {//gettters------------------
    return x;
}
double Rectangle2D::getY() const {
    return y;
}
double Rectangle2D::getWidth() const {
    return width;
}
double Rectangle2D::getHeight() const {
    return height;
}

void Rectangle2D::setX(double newX) const {// setters-------------------
    newX = x;
}
void Rectangle2D::setY(double newY) const {
    newY = y;
}
void Rectangle2D::setWidth(double newWidth) const {
    newWidth = width;
}
void Rectangle2D::setHeight(double newHeight) const {
    newHeight = height;
}

double Rectangle2D::getArea() const { // special gets-----------------
    double area = width * height;
    return area;
}
double Rectangle2D::getPerimiter() const
{
    double Perimeter = 2 * width + 2 * height;
    return Perimeter;
}
bool Rectangle2D::contains(double x, double y) const
{
    int count = 0;
    if (x <= (x + .5*width) && x >= (x - .5*width)) //check width
        count++;
    if (y <= (y + .5*height) && y >= (y - .5*height)) //check height
        count++;
    
   
    if (count < 2)
        return false;
    
    return true;
}
bool Rectangle2D::contains(const Rectangle2D &r) const
{
    int count = 0;
    if ((x + .5*width) <= (x + .5*width) && (x - .5*width) >= (x - .5*width)) //check width
        count++;
    if ((y + .5*width) <= (y + .5*height) && (y - .5*height) >= (y - .5*height)) //check height
        count++;
    
   
    if (count < 2)
        return false;
    
    
        return true;
}
bool Rectangle2D::overLaps(const Rectangle2D &r) const
{
    int count = 0;
    if ((x + .5*width) <= (x + .5*width) && (x - .5*width) >= (x - .5*width)) //check width
        count++;
    if ((y + .5*width) <= (y + .5*height) && (y - .5*height) >= (y - .5*height)) //checkheight
        count++;
    
       if (count < 1)
        return false;
   

        return true;
}




