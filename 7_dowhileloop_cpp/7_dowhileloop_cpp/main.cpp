//
//  main.cpp
//  7_dowhileloop_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    /*
        Use when you want to execute the code inside the loop
        at least once.
     */
    
    // guess the number game
    
    string numberGuessed;
    int intNumberGuessed = 0;
    
    do {
        /* print this ouput and get input at least once even if the number guessed is not equal to 4
         */
        cout << "Guess between 1 and 10: ";
        
        getline(cin, numberGuessed);
        
        // convert string to integer to be compared in the while condition
        intNumberGuessed = stoi(numberGuessed);
        
        cout << intNumberGuessed << endl;
        
    } while(intNumberGuessed != 4);
    
    cout << "You win" << endl;
    
    
    return 0;
}

/* getline() vs cin.getline() https://www.reddit.com/r/learnprogramming/comments/4fx64h/is_there_a_difference_between_cingetline_and/
 cin vs getline() https://stackoverflow.com/questions/4745858/stdcin-getline-vs-stdcin
 */
