//
// Created by Ellie Kunze on 9/10/22.
//

#include <string>
#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle(string make, string model, int year, float price, int mileage) {
 this->make = make;
 this->model = model;
 this->year = year;
 this->price = price;
 this->mileage = mileage;
}

Vehicle::Vehicle() {
    this->make = "COP3503";
    this->model = "Rust Bucket";
    this->year = 1900;
    this->price = 0;
    this->mileage = 0;
}

void Vehicle::Display() const {
    cout << year << " " << make <<  " " <<  model << " $" << price << " " << mileage << endl;
}

string Vehicle::GetYearMakeModel() const{
    return to_string(this->year) + " " + this->make + " " + this->model;
}

float Vehicle::GetPrice() const{
    return (price);
}

