//
//  main.cpp
//  4_arrays_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
        Arrays will store multiple values of the same data type.
        - think of arrays as boxes in memory.
     */
    
    // declare the array with number of data boxes needed
    int myFavNums[5];
    
    // declare an array and initiate with values stored
    int badNums[5] = {2, 13, 14, 24, 34};
    
    // get the first value in the array with a label/index
    cout << "Bad number 1: " << badNums[0] << endl;
    
    //--------------------------------//
    
    /*
     Multi-dimensional arrays which are boxes of boxes
     */
    
    // multi-dimensional character array
    char myName[7][7] = {{'l', 'e', 'l', 'e', 't', 'h', 'u'},
                        {'m', 'k', 'e', 'f', 'a'}};
    
    // print 2nd letter in the 2nd array
    cout << "2nd letter in the 2nd array: " << myName[1][1] << endl;
    
    // chnage the value in the array by using its index
    myName[0][0] = 'L';
    cout << "New value is " << myName[0][0] << endl;
    
    
    
    return 0;
}
