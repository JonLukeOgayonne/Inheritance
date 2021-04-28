/*
	JonLuke R. Ogayonne
	CIS 1202 501
	April 26, 2021
*/
#include<iostream>
#include<iomanip>
#include<string>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
using namespace std;

int main() {
	// String and integer to hold the automobile data.
	string modelName;
	int year, doors;
	double towingPower;
	cout << " Vehicle Program\n\n";
	cout << " Vehicle:";
	Vehicle vehicle();
	// Prompt user for input for the vehicle.
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	cin.ignore();
	// Send data to Vehicle class header file.
	Vehicle * myVehicle = new Vehicle;
	myVehicle->displayInfo(modelName, year);
	// Delete new vehicle.
	delete myVehicle;
	
	cout << "\n Car:";
	Car car();
	// Prompt user for input for the car.
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	cout << " Enter the number of doors: ";
	cin >> doors;
	cin.ignore();
	// Send data to Car class header file.
	Car* myCar = new Car;
	myCar->displayInfo(modelName, year, doors);
	// Delete new car
	delete myCar;
	
	cout << "\n Truck:";
	Truck truck();
	// Prompt user for input for the truck.
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	cout << " Enter the towing capacity: ";
	cin >> towingPower;
	// Send data to truck class header file.
	Truck* myTruck = new Truck;
	myTruck->displayInfo(modelName, year, towingPower);
	// Delete new truck.
	delete myTruck;
	// Terminate program.
	return 0;
}