//
//  main.cpp
//  5_forloop_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
        The For Loop allows you to continue executing code
        as long as a condition is true
     */
    
    /*
        define the loop with:                       for
        declare the data type for the value:        int i
        initialise the data to be incremented:      1
        increment as long as i at most 10 times:    i <= 10
        increment the value of i:                   i++
     */
    for(int i = 1; i <= 10; i++) {
        
        cout << i << endl;
    }
    
    // access multi-dimensional array by stacking inner for loops
    
    // multi-dimensional character array
    char myName[7][7] = {{'l', 'e', 'l', 'e', 't', 'h', 'u'},
        {'m', 'k', 'e', 'f', 'a'}};
    
    for(int j = 0; j < 3; j++) {
        
        for(int k = 0; k < 7; k++) {
            
            cout << myName[j][k];
        }
        cout << endl;
    }
    
    return 0;
}
