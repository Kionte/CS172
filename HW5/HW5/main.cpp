//
//  main.cpp
//  HW5
//
//  Created by Kionté on 3/31/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

/*Derek
 just missing the calulate the number abouve the average function 
 16/20
*/

/* just testing source tree 4/26/19
*/
#include <iostream>
using namespace std;

void size(int* size) { //gets size of array
    cout << "how big will the array be? ";
    cin >> *size;
}

int* allocArray(int size) { //creates array
    int* createArray = new int[size]; // dynamically creates array
    
    for(int i = 0; i < size; i++) { // loop used to give array temp values
        createArray[i] = 3;
    }
    
    return createArray; // returns the pointer which hold the arrray
}


void fillArray(int* numbers, int size) { // user input for array
    
    for(int* i =numbers; i < numbers+size; i++) { // efficient way to add values to pointer array
        cout << "input " << size << " numbers to find the average: " << endl;
        cin >> *i; // adds value to pointer location then increments to next location througout the loop
    }
}

double findAverage(int* numbers, int size) { // finds average
    double avg = 0; // variable to find average
    int total = 0; // var used to keep track of the total
    for(int* i = numbers; i < numbers+size; i++) // loop used to add all the values
    {
       // cout << *i << endl;
         total += *i; // places values into 'total' variable
       // cout << total << endl;
    }
    avg = static_cast<double>(total / size); // used to find the average of the total
    return avg; // returns the average 
}

int main() {
    int sizeOfArray; // size of the array will be used throught to maintain the size of the array
    
    size(&sizeOfArray); // get size of the array
    int* numbers = allocArray(sizeOfArray); // create pointer to hold the function that cretes the array
    fillArray(numbers,sizeOfArray); // fill the array will user input
    cout << findAverage(numbers, sizeOfArray) << " is the average of the numbers you input" << endl; /// output the average of the numbers the user input

    
    //Derek- Where is the number of numbers abouve the average part?? -4
    return 0;
}

