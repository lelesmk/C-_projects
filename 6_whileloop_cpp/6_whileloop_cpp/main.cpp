//
//  main.cpp
//  6_whileloop_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     Use While Loops when you don't know ahead of time
     when your loop is going to end
     */
    
    // Example: random number game
    
    int randNum = (rand() % 100) // numbers between 0 and 99
                    + 1; // plus 1 to get 1 to 100
    
    // generate random numbers between 1 and 100
    while(randNum != 100) {
        
        cout << randNum << ", ";
        
        // update the random number to eventually reach 100
        randNum = (rand() % 100) + 1;
    }
    cout << endl;
    
    // Simulate a for loop using a while loop
    
    int index = 1;
    
    while(index <= 10) {
        
        cout << index << endl;
        
        index++;
    }
    
    return 0;
    
}
