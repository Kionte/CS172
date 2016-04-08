//
//  main.cpp
//  HW5.2
//
//  Created by Kionté on 3/31/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include <iostream>
using namespace std;
//v.i*.v
//s.=*a.p

void size(int *sizeOfArray) { // gets size of the array
    cout << "what is the size of the array: ";
    cin >> *sizeOfArray; // adds value to this address will be used as the size of the array
}

int* allocateArray(int sizeOfArray) { // creates the array
    int* myArray = new int[sizeOfArray]; // dynamically creates the array making the array the size of the user input
    
    for(int i = 0; i < sizeOfArray; i++) { // loop is used to give each location a temp value
        myArray[i] = 3; // temp value is 3 in each location of the array
    }
    
    return myArray; // return this variable that way this pointer can be used later on easy way of passing an array from function to function
}

void populateArray(int* array, int sizeOfArray) { // add real values to array
    for(int* i = array; i < array + sizeOfArray; i++) { // efficeint loop used to add values to pointer array
        cout << "please enter a number:" << endl;
        cin >> *i; // adds value to this location which will incremnet to the next location in the array througout the loop
    }
}



int* doubleCapacity(const int* list, int size) { // double the size of the array at run time
    int* num = new int[size*2]; // new array with twice the size of old one
    
    for(int i = 0; i < size; i++) { // copys over old array
        num[i] = list[i];
    }
    for(int i = size; i < size*2; i++) { // add zero to the rest of the array instrad of random values
        num[i] = 0;
    }
    for(int i = 0; i < size*2; i++) { // output the new array
        cout << num[i] << " ";
    }
       return num;
}


int main() {
    int sizeOfArray;
    
    size(&sizeOfArray); // size of array
    int* array = allocateArray(sizeOfArray); // create pointer to hold the pointer func that creates array
    populateArray(array, sizeOfArray); // creates array with user input numbers
    doubleCapacity(array, sizeOfArray); // new array with 2x sze and copys over old array

    return 0;
}
