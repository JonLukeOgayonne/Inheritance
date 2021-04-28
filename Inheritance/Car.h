#ifndef CAR_H
#define CAR_H
#include<string>
#include "Vehicle.h"	// Vehicle header is inherited.
using namespace std;
// Class Car declaration.
class Car : public Vehicle {
private:		// Private integer member for Car class.
	int numOfDoors;
public:
	// Default constructor.
	Car() : Vehicle() {
		numOfDoors = 0;
	}
	// Constructor for Car class.
	Car(string vehicleManufacturer, int vehicleyear, int doors) : Vehicle(vehicleManufacturer, vehicleyear) {
		numOfDoors = doors;
	}
	// Accessor for door integer.
	int getDoors() {
		return numOfDoors;
	}
	//
	void displayInfo(string vehicleManufacturer, int vehicleyear, int sumOfDoors) {
		//
		Vehicle::displayInfo(vehicleManufacturer, vehicleyear);
		cout << " Doors: " << sumOfDoors << endl;
	}
};
#endif // End Car declaration.