//
//  main.cpp
//  9_functions_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

/* Functions go here in the header before the main function
    - functions allow you to reuse code and add a certain level
        of organization to your code
    - the main purpose of functions is to eliminate code duplication
    - you define your function before the main function
    - you call your function inside the main function
*/

// if the function returns a value define with return type
int addNumbers(int a, int b = 0)
/* function prototype
    - initialised data types inside the parameter comes last
    - if a default value is declared you wouldn't need to send
        a value
 */
{
    int combinedValue = a + b;
    
    return combinedValue;
    
    /* but you don't need to declare a new variable to return the sum
        e.g.
     
     return a + b;
     
     */
    
} // function body

/* Overloading functions
    - means using the same name but different attributes
 */

// use the same function name as above
int addNumbers(int a, int b, int c) {
    
    return a + b + c;
}

/* void functions don't return a value.
    - allows to perform a task
    - void means "nothing", so it doesn't return anything
 */
void addNumbersAndLog(int a, int b, int c) {
    
    int result = addNumbers(a, b, c);
    cout << result << endl;
    
}

void addNumbersAndLog(int a, int b = 0) {
    
    int result = addNumbers(a, b);
    cout << result << endl;
    
}

int main() {
    
    // pass one value to the addNumbers function
    cout << addNumbers(1) << endl;
    // we want to avoid performing operations in out statements
    int result = addNumbers(1);
    cout << result << endl;
    
    // pass three values to overloaded addNumbers function
    cout << addNumbers(1, 5, 6) << endl;
    // we want to avoid performing operations in out statements
    int result2 = addNumbers(1, 5, 6);
    cout << result2 << endl;
    
    /* call a void function so we don't need to declare different
        variables for the result and don't need to repeat the cout
        statement in the main function
     */
    
    addNumbersAndLog(1, 5, 6);
    addNumbersAndLog(10, 15, 16);
    addNumbersAndLog(10);
    
    
    return 0;
    
}
