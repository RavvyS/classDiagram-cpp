#pragma once
#include <iostream>
#include <string>
#include "Manager.h"
using namespace std;

class Trip;
class Boat
{
private:
    int boatID;
    string boatName;
    Trip* trip;

public:
    Boat();
    Boat(int bId, string bName,Trip* bTrip); 
    void registerBoat();
    void assignToTrip(Trip* trip);
    void display();
    ~Boat();
};

