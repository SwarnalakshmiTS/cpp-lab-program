#include <iostream>
using namespace std;


class Vehicle
{
private:
    double mileage;
    double price;
};


class Car: public Vehicle
{
private:
    double ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;


};


class Bike: public Vehicle
{
private:
    int numberOfCylinders;
    int numberOfGears;
    string coolingType;
};
