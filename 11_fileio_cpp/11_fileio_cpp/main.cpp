//
//  main.cpp
//  11_fileio_cpp
//
//  Created by Lelethu Mkefa on 2018/10/13.
//  Copyright © 2018 Lelethu Mkefa. All rights reserved.
//

#include <iostream> // add/read data to/from file
#include <fstream> // file input and out

using namespace std;

int main() {
    
    /*
        1. create a file object
        2. open a file to associate with the file object
            - c++ doesn't allow you work with file directly
            - the file object represents your file inside c++
            - if no file exist with the name c++ will create it
        3. print to your file object
            - this writes to your associated file
        4. close the file object to free computer resources
     */
    
    // 1. create a file object
    ofstream myFile;
    // 2. open a file to associate with the file object
    myFile.open("test.txt");
    
    // 3. print to your file object
    myFile << "This is my first file created inside c++ \n";
    // 4. close the file object
    myFile.close();
    
    /*
     create a file object and associate/open it with a single statement
     */
    
    ofstream newFile("test2.txt");
    
    // test if the file was associated/opened correctly
    if(newFile.is_open()){
        cout << "Your file is good to go!" << endl;
        
        // print to your file
        newFile << "This is my second file created inside c++ \n";
        newFile.close();
        
    } else {
        cout << "Oops. Your file was not created!" << endl;
    }
    
    
    return 0;
    
}

/* https://stackoverflow.com/questions/16779149/c-program-in-xcode-not-outputting-simple-text-file-using-outfile */
