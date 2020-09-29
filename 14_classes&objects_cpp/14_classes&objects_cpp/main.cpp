//
//  main.cpp
//  14_classes&objects_cpp
//
//  Created by Lelethu Mkefa on 2018/10/14.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>
#include <string> // when using strings

using namespace std;

/* Classes are used to group related functions and variables
    - declared above the main function
    - public: access specifier gives programs outside
        the class permission to use it
 */

class ExampleClass {
    public:
        void saySomething() {
            cout << "Something :) " << endl;
        }
};

int main() {
    
    /* Objects are used to access the functions inside of a Class
        - it makes it easier to identify which overloaded function
            you want to use
        - declared inside the main
     */
    
    // declare the object with the class as the data type
    ExampleClass exampleObject;
    
    /* to access the function inside the class use the object as a key
        - the object represents the class declare above the main function
        - we can't access the function inside a class with a direct call
     */
    exampleObject.saySomething();
    
}
