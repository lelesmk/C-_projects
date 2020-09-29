//
//  main.cpp
//  2_ifstatement_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     If statement executes a different code depending
     upon different conditions
     
     Comparison operators
     --------------------
     equal to       ==
     not equal to   !=
     greater than   >
     less than      <
     greater than or equal to   >=
     less than or equal to      <=
     
     Logical operators
     -----------------
     AND    &&
     OR     ||
     NOT    !
     
     */
    
    // Example:
    // A program to determine if someone is of driving age
    
    int age = 70;
    int ageAtLastExam = 16;
    bool isNotIntoxicated = true;
    
    if((age >= 1) && (age < 16)) {
        
        cout << "You can't drive" << endl;
        
    } else if(! isNotIntoxicated) {
        
        cout << "You can't drive" << endl;
        
    } else if(age >= 80 && ((age > 100) || (age - ageAtLastExam) > 5)) {
        
        cout << "You can't drive" << endl;
        
    } else {
        
        cout << "You can drive" << endl;
    }
    
    return 0;
}
