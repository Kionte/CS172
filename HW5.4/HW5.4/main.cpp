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
    Rectangle2D r1(2,2,5.5,4.9);
    Rectangle2D r2(4,5,10.5,3.2);
    Rectangle2D r3(3,5,2.3,5.4);
    
    cout << r1.getArea() << endl;
    cout << r1.getPerimiter() << endl;
    cout << r1.contains(3, 3) << endl;
    cout << r1.contains(r2) << endl;
    cout << r1.overLaps(r3) << endl;
    return 0;
}
