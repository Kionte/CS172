//
//  Rectangle2D.h
//  HW5.4
//
//  Created by Kionté on 4/7/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#ifndef Rectangle2D_h
#define Rectangle2D_h


class Rectangle2D {
    
private:
    double originalX; // variable for x
    double originalY; // variable for y
    double width; // variable for width
    double height; // variable for height
    
public:
    double getX() const; // gets x
    double getY() const; // gets y
    double getWidth() const; // gets width
    double getHeight() const; // gets height
    
    void setX(double newX) const; // sets x
    void setY(double newY) const; // sets y
    void setWidth(double newWidth) const; // sets width
    void setHeight(double newHeight) const; // sets height
    
    double getArea() const; // gets area
    double getPerimiter() const; // gets perimiter
    
    bool contains(double x, double y) const; // returns true if specified point is inside rec 11.9a
    bool contains(const Rectangle2D &r) const; // returns true if specified recangle is inside rec 11.9b
    bool overLaps(const Rectangle2D &r) const; //returns true if specified recangle is inside rec 11.9c
    
    Rectangle2D(); // default constructor
    Rectangle2D(double newX, double newY, double newWidth, double newHeight); // custom constructor
};

#endif /* Rectangle2D_h */
