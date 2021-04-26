#ifndef VEHICLE_H
#define VEHICLE_H
#include<string>
using namespace std;
// Class Vehicle declaration.
class Vehicle {
private:		// Private members.
	string manufacturerName;
	int yearBuilt;
public:
	// Default constructor.
	Vehicle() {
		manufacturerName = "";
		yearBuilt = 0;
	}
	// Constructor
	Vehicle(string vehicleManufacturer, int vehicleyear) {
		manufacturerName = vehicleManufacturer;
		yearBuilt = vehicleyear;
	}
	// Accessors
	string getManufacturerName() {
		return manufacturerName;
	}
	
	int getYearBuilt() {
		return yearBuilt;
	}
};
#endif // End vehicle declaration.
