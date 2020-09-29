//
//  main.cpp
//  8_strings_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    // strings in C vs C++
    
    // C you would need to specify a charater array for a string
    char happyArray[] = {'H', 'a', 'p', 'p', 'y', '\0'};
    
    // C++ using strings is easier using a string object
    string birthdayString = " Birthday";
    
    // Let's print Happy + Birthday
    cout << happyArray + birthdayString << endl;
    
    // Let's get the user's name and print
    string yourName;
    cout << "What is your name? ";
    getline(cin, yourName);
    cout << "Hello " << yourName << endl;
    /*
    // Let's get the user to guess Euler's Constant
    double eulersConstant = .57721;
    string eulerGuess;
    double eulerGuessDouble;
    
    cout << "What is Euler's Constant? " << endl;
    getline(cin, eulerGuess);
    eulerGuessDouble = stod(eulerGuess);
    
    if(eulerGuessDouble == eulersConstant) {
        
        cout << "You're right :)" << endl;
        
    } else {
        
        cout << "You're wrong :(" << endl;
        
    }
    
    // other operations on strings
    
    cout << "Size of string " << eulerGuess.size() << endl;
    cout << "Is string empty " << eulerGuess.empty() << endl;
    cout << eulerGuess.append(" was your guess.") << endl;
    */
    // assign copies of a value to another string
    string wholeName = yourName.assign(yourName);
    cout << "My name is " << wholeName << endl;
    
    // get a substring
    string shortName = wholeName.assign(wholeName, 0, 4);
    cout << "But you can call me " << shortName << endl;
    
    // search the index of a string
    int lastNameIndex = yourName.find("Mkefa", 0);
    cout << "Index for last name is " << lastNameIndex << endl;
    
    // put in a string at the index that I specify
    yourName.insert (7, " Genius");
    cout << yourName << endl;
    
    // delete charaters in a substring
    yourName.erase(8, 7);
    cout << yourName << endl;
    
    // replace characters in a substring
    yourName.replace(4, 3, " Mxongo");
    cout << yourName << endl;
    
    return 0;
    
}
