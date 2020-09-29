//
//  main.cpp
//  3_switchstatement_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    /*
     Switch statements used when you have a limited
     number of possible options.
     
     */
    
    //Example: Hello based on user option
    
    int greetingOption;
    
    cout << "Say hello in a foreign language" << endl << endl;
    cout << "1. French" << '\n';
    cout << "2. Spanish" << '\n';
    cout << "3. Xhosa" << '\n';
    cout << endl;
    
    cout << "Select a language option: ";
    cin >> greetingOption;
    
    switch(greetingOption) {
        
        case 1:
            cout << "Bonjour!" << endl;
            break;
        case 2:
            cout << "Ola!" << endl;
            break;
        case 3:
            cout << "Molo!" << endl;
            break;
        default:
            cout << "Hello!" << endl;
    }
    
    return 0;
}

