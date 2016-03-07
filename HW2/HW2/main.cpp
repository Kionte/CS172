//
//  main.cpp
//  Offline_HW2
//
//  Created by Kionté on 2/21/16.
//  Copyright © 2016 Kionté. All rights reserved.
//

#include <iostream>
#include "fan.h"
#include "Quadratic.h"
#include "Even.h"
using namespace std;

void numberOne();
void numberTwo();
void numberThree();
void Assingment();

int main() {
    Assingment();
}







void numberOne() { // home work number 1
    Fan fan1(3, true, 10.00); // create object and set values to oject 1
    Fan fan2(2, false, 5.00); // create object and set values to object 2
    
    cout << "\t\t Fan 1:" << endl; //Out put the properties to fan 1
    cout << "Speed: " << fan1.getSpeed() << endl;
    cout << "On/Off: " << fan1.getOn() << endl;
    cout << "Radius: " << fan1.getRadius() << endl;
    
    cout << "\t\t Fan 2:" << endl; // output the properties to fan 2
    cout << "Speed: " << fan2.getSpeed() << endl;
    cout << "On/Off: " << fan2.getOn() << endl;
    cout << "Radius: " << fan2.getRadius() << endl;
}
void numberTwo() { // home work number 2
    int newA, newB, newC; //Declare variables for input
    
    cout << "Note. These Values will be used in the quadratic formula:\n(x= -b +/- sqrt(b^2-4ac)/2a)\nInput three values for A, B, and C.\n " << endl; //cin values a b and c
    cin >> newA;
    cin >> newB;
    cin >> newC;
    
    QuadraticEquation equation(newA,newB,newC); //place values in construtor
    
    //if else's
    int discrminant = equation.getDiscriminant(); // create variable for discriminent funtion
    
    if(discrminant > 0) { // if greater than 0 show both roots
        cout << "Root one: " << equation.getRoot1() <<
        "\nRoot two: " << equation.getRoot2() << endl;
    }
    else if(discrminant == 0) { // if = 0 show one root
        cout << "Root one: " << equation.getRoot1() << endl;
    }
    else { // if less than 0 no roots
        cout << "Contains no roots..." << endl;
    }
}
void numberThree() { // home work number 3
    int newInput = 0; // var for user input
    int warning = 0; // var to remind user to input even number
    
    do {
        if(warning > 0) { // if warning is greater than 0 warn user to use even number
            cout << "Please make sure input is even!!" << endl; //warning
        }
        cout << "\nNote. This input will be used to find the previouse and following even numbers\nPlease input a even number: "; // asking for input
        cin >> newInput; // user input
        cout << endl;
        warning++; // if loop loops it will increment  and warn next time
    }while(newInput % 2 != 0); // make sure input is even
    
    EvenNumber userInput(newInput); // makes user input the variable for the follwoing functions
    cout << "your input was: " << userInput.getValue() << endl;  // outputs value
    cout << "The next even number was: " << userInput.getNext() << endl; // outputs value +2
    cout << "The Previouse number was: " << userInput.getPrevious() << endl; // outputs value -2
}

//-------------------------------------Menu for the entire Assingment--------------------------------------//
void Assingment() {
    int assigmentNumber;
    cout << "Input the corrosponding number for the desired assingment: \n EX01: 1 \n EX02: 2 \n EX03: 3" << endl;
    cin >> assigmentNumber;
    switch (assigmentNumber % 4) {
        case 1:
            cout << "\t\t\t\t\t HomeWork Number One: " << endl;
            numberOne();
            break;
        case 2:
            cout << "\t\t\t\t\t HomeWork Number Two: " << endl;
            numberTwo();
            break;
        case 3:
            cout << "\t\t\t\t\t HomeWork Number Three: " << endl;
            numberThree();
            break;
            
        default:
            cout << "No option" << endl;
            break;
    }
}








