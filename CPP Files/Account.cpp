//
// Created by Huy Bui Thanh on 27/04/2021.
//

#include "Account.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Account{
private:
    int id;
    string name;
    string address
    string phoneNumber;
    int listOfRentals;
    string type;
public:
// Default constructor
    Account:: Account(){

    }

// Constructor
    Account::Account(int id, string name, string address, string phoneNumber, int listOfRental) {
        this->id = id;
        this->name = name;
        this->address = address;
        this->phoneNumber = phoneNumber;
        this->listOfRentals = listOfRental;
    }

    // Getter Fuctions
    int getID() const {return this->id;}
    string getName() const {return this->name;}
    string getAddress() const {return this->address;}
    string getPhoneNumber() const {return this->phoneNumber;}
    int getListOfRentals() const {return this->listOfRentals;}

    // Setter Functions
    void setID() { this->id = id; }
    void setName() { this->name = name; }
    void setAddress() { this->address = address; }
    void setPhoneNumber() { this->phoneNumber = phoneNumber; }
    void setListOfRentals() { this->listOfRentals = listOfRentals; }


};
