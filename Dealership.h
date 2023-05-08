//
// Created by Ellie Kunze on 9/13/22.
//
using namespace std;
#pragma once
#include "Showroom.h"
#include <string>
#ifndef UNTITLED_DEALERSHIP_H
#define UNTITLED_DEALERSHIP_H


class Dealership {
private:
    unsigned int capacity;
    int numShowrooms;
    float sumPrice;
    int numVehicles;
    vector <Vehicle> vehicleList;
    float avePrice;
    string name;
    vector<Showroom> showrooms;

public:
    //Dealership();
    //Dealership(string,int);
    Dealership(string name = "Generic Dealership", unsigned int capacity = 0);
    string GetName() const;
    void AddShowroom(Showroom s);
    float GetAveragePrice();
    void ShowInventory();
    unsigned int GetCount();
};



#endif //UNTITLED_DEALERSHIP_H
