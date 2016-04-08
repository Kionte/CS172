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
    double x;
    double y;
    double width;
    double height;
    
public:
    double getX() const;
    double getY() const;
    double getWidth() const;
    double getHeight() const;
    
    void setX(double newX) const;
    void setY(double newY) const;
    void setWidth(double newWidth) const;
    void setHeight(double newHeight) const;
    
    double getArea() const;
    double getPerimiter() const;
    
    bool contains(double x, double y) const; // returns true if specified point is inside rec 11.9a
    bool contains(const Rectangle2D &r) const; // returns true if specified recangle is inside rec 11.9b
    bool overLaps(const Rectangle2D &r) const; //returns true if specified recangle is inside rec 11.9c
    
    Rectangle2D();
    Rectangle2D(double newX, double newY, double newWidth, double newHeight);
};

#endif /* Rectangle2D_h */
