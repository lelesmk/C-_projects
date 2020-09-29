//
//  main.cpp
//  13_readfileio_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream playerFile("players.txt");
    
    int id;
    string name;
    double money;
    
    while (playerFile >> id >> name >> money) {
        cout << id << ", " << name << ", " << money << endl;
    }
    
    return 0;
}
