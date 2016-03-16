//
//  main.cpp
//  HW3
//
//  Created by Kionté on 3/8/16.
//  Copyright © 2016 Kionté. All rights reserved.
//
//
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isPalindrome(const string& userInput) { // used  to see fi word is palindrome
    stack<char> word; // create stack
    
    for (int i = 0;i < userInput.size();i++) { // input the users word into the stack
        tolower(userInput[i]); // makes them all lower case so it can compare
        
        word.push(userInput[i]); // puts each letter in the stack
        
    }
    
    
    for (int i = 0; i < userInput.size(); i++){ // loop will be used to see if there is a palindrome
        
        if (userInput[i] != word.top()) { // if there is no match then it is not a palindrom
            
            return false; // return false if no match
        }
        word.pop(); // remove the top letter of the stack to continuew the loop and check for the next word
        
    }
    
    return true; // if it is a match all the way through then return true
    
}
    int main()

    {
        
        string userInput; // var for user input
        

        
        cout << "Enter a word to check to see whether or not its a palindrome: "; // asking user to input a word
        
        std::cin >> userInput; // this is where user inputs word
        
        cout << endl;

        if (isPalindrome(userInput) == true) { // if the bool function is true
            
            cout << userInput << " is a palindrome" << endl; // then tell user it is a palindrome
            
        }else{
            cout << userInput << " is not a palindrome" << endl; // or else tell the user it is not a palindrome

        }
        return 0;
    }

