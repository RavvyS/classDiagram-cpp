#pragma once
#include <iostream>
#include <string>
#define SIZE 20

class Reservation;
class Promotion;
class Boat;
class Manager;
class Package;
using namespace std;
class Trip{

private:
    int tripID;
    string destination;
    string startDate;
    string endDate;

    Reservation* reservations[SIZE];
    Promotion* promotions[SIZE];
    Boat* boats[SIZE];
    Manager* manager[SIZE];
    Package* packages[SIZE];

public:
    Trip();
    Trip(int tID, string tDestination, string tStartDate, string tEndDate);
    void createTrip();
    void scheduleTrip();
    void display();
    ~Trip();
};
