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
	// Display truck data.
	void displayInfo(string vehicleManufacturer, int vehicleyear, double towing) {
		// Display information function method.
		Vehicle::displayInfo(vehicleManufacturer, vehicleyear);
		cout << " Doors: " << towing << endl;
	}
};
#endif // End Truck declaration.
