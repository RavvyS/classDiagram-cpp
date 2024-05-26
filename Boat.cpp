#include "Boat.h"

Boat::Boat() {
    boatID = 0;
    boatName = "";
    trip = nullptr;
}
Boat::Boat(int bId, string bName, Trip* bTrip) {
    boatID = bId;
    boatName = bName;
    trip = bTrip;
}
void Boat::registerBoat() {
    cout << "\nBoat " << boatName << " with ID " << boatID << " registered successfully." << endl;
}

void Boat::assignToTrip(Trip* trip) {
    cout << "Boat " << boatName << " assigned to trip "<< endl;
}
void Boat::display() {
    cout << "Boat ID: " << boatID << "\nBoat Name: " << boatName << endl;
}
Boat::~Boat() {
    cout << "Boat Destructor runs..."<<endl ;
}
