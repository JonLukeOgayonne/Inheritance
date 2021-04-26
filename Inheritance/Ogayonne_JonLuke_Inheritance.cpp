/*
	JonLuke R. Ogayonne
	CIS 1202 501
	April 26, 2021
*/
#include<iostream>
#include<string>
#include "Vehicle.h"
using namespace std;

int main() {
	// String and integer to hold the automobile data.
	string modelName;
	int year;
	cout << " Vehicle Program\n\n";
	cout << " Vehicle:";
	Vehicle vehicle();
	//
	cout << "\n Enter the manufacturer: ";
	getline(cin, modelName);
	cout << " Enter the year built: ";
	cin >> year;
	//
	Vehicle myVehicle(modelName, year);
	//
	cout << " Vehicle information:" << endl;
	cout << " Manufacturer: " << myVehicle.getManufacturerName() << endl;
	cout << " Year Built: " << myVehicle.getYearBuilt() << endl;

	return 0;
}