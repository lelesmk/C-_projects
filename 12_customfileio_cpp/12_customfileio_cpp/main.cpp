//
//  main.cpp
//  12_customfileio_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ofstream playerFile("players.txt");
    
    cout << "Enter the Player ID, Name, and Money" << endl;
    cout << "To save and quit press cmd+z \n";
    
    int idNumber;
    string name;
    double money;
    
    if(playerFile.is_open()){
        while(cin >> idNumber >> name >> money){
            playerFile << idNumber << ' ' << name << ' ' << money << endl;
        }
        playerFile.close();
    } else {
        cout << "Something went wrong." << endl;
    }
    
       
    return 0;
}
