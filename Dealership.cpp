//
// Created by Ellie Kunze on 9/13/22.
//
#include <iostream>
#include <string>
using namespace std;
#include "Dealership.h"

Dealership::Dealership(string name, unsigned int capacity) { //constructor with and without parameters
    this->name = name;
    this->capacity = capacity;
    numShowrooms = 0;
    //numVehicles = 0;
    //showrooms = new Showroom;
}

void Dealership::AddShowroom(Showroom s) {
//    cout << numShowrooms << endl;
//    cout << capacity << endl;
    if (numShowrooms >= capacity) {
        cout << "Dealership is full, can't add another showroom!" << endl;
    }
    else {
        showrooms.push_back(s);
        numShowrooms++;
    }
}

float Dealership::GetAveragePrice() {
    int vehicleCount = 0;
    if (numShowrooms == 0) {
        sumPrice = 0.0;
    }
    else {
        for (unsigned int i = 0; i < showrooms.size(); i++) {
            vehicleList = showrooms.at(i).GetVehicleList();
            for (unsigned int j = 0; j < vehicleList.size(); j++) {
                //sumPrice += vehicleList.at(j).GetPrice();
                sumPrice += vehicleList.at(j).GetPrice();
                vehicleCount++;
            }
        }
    }
    if (vehicleList.size() == 0) {
        avePrice = 0.00; //float value
    }
    else {
        avePrice = sumPrice /  vehicleCount;
    }
    return avePrice;
}

void Dealership::ShowInventory() {
    float avePrice;
//    if (numShowrooms == capacity) {
//        cout << "Dealership is full, can't add another showroom!" << endl;
//        //cout << deal << "is empty!" << endl;
//        avePrice = GetAveragePrice();
//        cout << "Average car price: $" << avePrice;
//    } else {
        for (unsigned int i = 0; i < showrooms.size(); i++) {
            cout << "Vehicles in " << showrooms.at(i).GetName() << endl;
            vehicleList = showrooms.at(i).GetVehicleList();
            for (unsigned int j = 0; j < vehicleList.size(); j++) {
               // showrooms.at(j).ShowInventory();
                vehicleList.at(j).Display();
            }
            cout << endl;
        }
        if (numShowrooms == 0) {
            cout << "Generic Dealership is empty!" << endl;
        }
        cout << "Average car price: $" << GetAveragePrice();
}

//string Dealership::GetName() const {
//    return std::string();
//}
//
//unsigned int Dealership::GetCount() {
//    return 0;
//}
