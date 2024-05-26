#include "Trip.h"

Trip::Trip() {
	tripID = 0;
	destination = "";
	startDate = "";
	endDate = "";
}
Trip::Trip(int tID, string tDestination, string tStartDate, string tEndDate) {
	tripID = tID;
	destination = tDestination;
	startDate = tStartDate;
	endDate = tEndDate;
}

void Trip::display() {
	cout << "Trip Id: " << tripID
		<< "\nTrip destination : " << destination
		<< "\nTrip startDate: " << startDate
		<< "\nTrip endDate: " << endDate
		<< endl << endl;
}
void Trip::createTrip() {}
void Trip::scheduleTrip() {}
Trip::~Trip() {
	cout << "Trip Destructor runs...";
}