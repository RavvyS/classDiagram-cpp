#pragma once
#include <iostream>
#include "User.h"
#include "Reservation.h"
using namespace std;
class TravelAgent : public User
{
private:
    int agentID;
    string name;
    Reservation* reservation;
public:
    TravelAgent();
    TravelAgent(string uName, string uPass, int tID, string tName);
    void displayTravelAgent();
    ~TravelAgent();
};

