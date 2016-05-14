//
//  main.cpp
//  HW 5.3
//
//  Created by Kionté on 4/6/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

///psudo code-------
//"find smallest element, use pointers to write a fintion that finds the elements  in a array of integers"
// V.I*.V
// S.*=A.P

/*
 Derek -
 This looks real good as well, keep up the great programing, also Xcode is so beautiful to see :)
 20/20
 */
#include <iostream>
using namespace std;

void size(int* size) {
    cout << "What is the size of the array: ";
    cin >> *size;
}
int* allocate(int size) {
    int* array = new int[size];
    
    for(int i = 0; i < size; i++) {
        array[i] = 3;
    }
    return array;
}
void populate(int* array, int size) {
    for(int* i = array; i < array + size; i++) {
        cout <<"please input " << size << " numbers " << endl;
        cin >> *i;
    }
}
int smallestElement(int* array, int size) { // gets smallest value in the array that the user created
    int sElement = array[0]; // variable used to hold the smallest value
    for(int i = 0; i < size; i++) // loop to check all values
    {
        if(sElement > array[i]) // if the current smallest element is greater than the compared value
        {
            sElement = array[i]; // the new smallest eleemnt is the value that was most recently checked
        }
    }
    return  sElement; // return the smallest element found in the array
}



int main() {
    int sizeOfArray; //  size of the array will beused to maintain size of array
    
    size(&sizeOfArray); // get size of the array
    int* array = allocate(sizeOfArray); // create the array
    populate(array, sizeOfArray); // fill in the array
    cout << smallestElement(array, sizeOfArray) << " is the smallest element in the array." << endl; // output smallest number
    return 0;
}