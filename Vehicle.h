#ifndef UNTITLED_VEHICLE_H
#define UNTITLED_VEHICLE_H
using namespace std;
#include <string>


class Vehicle {
private:
    string make;
    string model;
    int year;
    float price;
    int mileage;

public:
    Vehicle();
    Vehicle(string, string, int, float, int);
    void Display() const;
    string GetYearMakeModel() const;
    float GetPrice() const;

};



#endif //UNTITLED_VEHICLE_H
