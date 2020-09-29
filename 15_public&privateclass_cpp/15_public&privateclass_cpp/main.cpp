//
//  main.cpp
//  15_public&privateclass_cpp
//
//  Created by Lelethu Mkefa on 2018/10/14.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

/* Private access specifier protects variables
    - only functions inside the class can access private
    - functions should be public & variabls private
 */

class ExampleClass {
    public:
        // function that sets the value
        void setName(string x) {
            name = x;
        }
        // function that gets the value
        string getName() {
            return name;
        }
    private:
        // variables accessible to functions inside the class
        string name;
};

int main() {
    
    /* Private variables are accessed through Public functions
        - using objectNames.function
     */
    
    // Declare the object (associate a object name to the class)
    ExampleClass egObject;
    // Pass the name value to the function setName
    egObject.setName("Sir Al Wallace");
    // Print name
    cout << egObject.getName() << endl;
    
    
    return 0;
    
}
