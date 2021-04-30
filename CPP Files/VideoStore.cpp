//
// Created by Huy Bui Thanh on 27/04/2021.
//

#include "VideoStore.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main(int argc, char* argv[]){

}

void printMenu(){
    string input;
    cout << "Select an option: " << endl;
    cout << "1. Item" << endl;
    cout << "2. Account" << endl;
    cin >> input;
    if (input == 1){
        cout << "************************************************************************" << endl;
        cout << "1. Add an item" << endl;
        cout << "2. Update an item" << endl;
        cout << "3. Delete an item" << endl;
        cout << "4. Rent an item" << endl;
    }
    else if (input == 2) {
        cout << "************************************************************************" << endl;
        cout << "1. Add an account" << endl;
        cout << "2. Update an account" << endl;
        cout << "3. Delete an account" << endl;
    }

}
