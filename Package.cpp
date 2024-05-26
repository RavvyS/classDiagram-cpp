#include "Package.h"

Package::Package() {
	packageID = 0;
	packageName = "";
	packageDetails = "";
}
Package::Package(int pID, string pName, string pDetails) {
	packageID = pID;
	packageName = pName;
	packageDetails = pDetails;
}

void Package::display() {
	cout << "Package Id: " << packageID
		<< "\nPackage Name : " << packageName
		<< "\nPackage Details: " << packageDetails << endl ;
}

void Package::showPackage() {}
void Package::showAvailability() {}

Package::~Package() {
	cout << "Package Destructor runs..." << endl << endl;
}