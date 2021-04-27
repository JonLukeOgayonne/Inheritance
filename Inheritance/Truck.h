#ifndef TRUCK_H
#define TRUCK_H
#include<string>
#include "Vehicle.h"
using namespace std;
// Class Truck declaration.
class Truck : public Vehicle {
private:		// Private double member for Truck class.
	double towingCapacity;
public:
	// Default constructor.
	Truck() : Vehicle() {
		towingCapacity = 0;
	}
	// Constructor for truck class.
	Truck(string vehicleManufacturer, int vehicleyear, double towPower) : Vehicle(vehicleManufacturer, vehicleyear) {
		towingCapacity = towPower;
	}
	// Accessor for truck integer.
	int getTowPower() {
		return towingCapacity;
	}
};
#endif // End Truck declaration.
