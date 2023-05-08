//
// Created by Ellie Kunze on 9/11/22.
//

#ifndef UNTITLED_SHOWROOM_H
#define UNTITLED_SHOWROOM_H
using namespace std;
#include <string>
#include <vector>
#include "Vehicle.h"


class Showroom {
private:
    //Showroom();

    string roomName;
    unsigned int capacity;
    unsigned int numVehicles;
    vector<Vehicle> vehicles;
    int sumPrice;

public:
    void AddVehicle (const Vehicle v);
    void ShowInventory() const;
    float GetInventoryValue();
    //Showroom(string name, unsigned int capacity);
    Showroom(string name = "Unnamed Showroom", unsigned int capacity = 0);
    //Showroom();
    unsigned int GetCapacity() const;
    unsigned int GetCount() const;
    string GetName() const;

    vector<Vehicle> GetVehicleList(); // ?
};


#endif //UNTITLED_SHOWROOM_H
