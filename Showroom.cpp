//
// Created by Ellie Kunze on 9/11/22.
//
#include <iostream>
#include "Showroom.h"
#include <string>
#include "Vehicle.h"
using namespace std;

Showroom::Showroom(string name, unsigned int capacity) {
    this->roomName = name;
    this->capacity = capacity;
    numVehicles = 0;
    //vehicles = new Vehicle[capacity];
}

vector<Vehicle> Showroom::GetVehicleList() {
    return vehicles;
}

void Showroom::ShowInventory() const {
    if (numVehicles == 0) {
        cout << roomName << " is empty!" << endl;
    }
    else {
        cout << "Vehicles in " << roomName << endl;
        for (unsigned int i = 0; i < vehicles.size(); i++) { //can i use get size here
            vehicles.at(i).Display();
        }
    }
}

void Showroom::AddVehicle(const Vehicle v) {
    if (numVehicles == capacity) {
        cout << "Showroom is full! Cannot add " << v.GetYearMakeModel() << endl;
       // v.Display();
    }
    else {
        vehicles.push_back(v);
//        vehicles[GetCount()] = v;
        numVehicles++;
    }
}


//unsigned int Showroom::GetCapacity() const {
//    return capacity;
//}

//unsigned int Showroom::GetCount() const {
//    return numVehicles;
//}

string Showroom::GetName() const {
    return roomName;
}

float Showroom::GetInventoryValue() {
    sumPrice = 0;
    for (unsigned int j = 0; j < numVehicles; j++) {
    //for (unsigned int j = 0; j < vehicles.GetCount(); j++) {
    sumPrice += vehicles[j].GetPrice();
    }//using numVehicles
    return sumPrice;
    //for loop through vehicle array and return price at the end
}