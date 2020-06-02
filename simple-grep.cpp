/*
Brendon Linthurst
CPSC 351 Assignment 0
Simple Grep

C++ implementation of UNIX grep tool. Search a file for a string and return the lines that the query appears in.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[]) {
    string searchTerm(argv[2]);
    string fileName(argv[1]);
    string line = "null";
    ifstream file(fileName.c_str());

    if (!file.is_open()) {
        cout << "cannot open " << fileName << endl;
        exit(EXIT_FAILURE);
    }

    while(getline(file, line)){
        if(line.find(searchTerm) != string::npos) {
            cout << line << endl;
        }
    }
    return 0;
}
