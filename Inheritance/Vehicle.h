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
	//
	void displayInfo(string manufacturer, int year) {
		//
		cout << " Vehicle information:" << endl;
		cout << " Manufacturer: " << manufacturer << endl;
		cout << " Year Built: " << year << endl;
	}
};
#endif // End vehicle declaration.
