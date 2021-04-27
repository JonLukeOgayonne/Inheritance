/*
	JonLuke R. Ogayonne
	CIS 1202 501
	April 26, 2021
*/
#include<iostream>
#include<string>
#include "Vehicle.h"
#include "Car.h"
using namespace std;

int main() {
	// String and integer to hold the automobile data.
	string modelName;
	int year, doors;
	cout << " Vehicle Program\n\n";
	cout << " Vehicle:";
	Vehicle vehicle();
	//
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	cin.ignore();
	//
	Vehicle myVehicle(modelName, year);
	//
	cout << " Vehicle information:" << endl;
	cout << " Manufacturer: " << myVehicle.getManufacturerName() << endl;
	cout << " Year Built: " << myVehicle.getYearBuilt() << endl;
	//
	cout << "\n\n Car:";
	Car car();
	//
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	cout << " Enter the number of doors: ";
	cin >> doors;
	//
	Car myCar(modelName, year, doors);
	//
	cout << " Vehicle information:" << endl;
	cout << " Manufacturer: " << myCar.getManufacturerName() << endl;
	cout << " Year Built: " << myCar.getYearBuilt() << endl;
	cout << " Doors: " << myCar.getDoors() << endl;
	// Terminate program.
	return 0;
}