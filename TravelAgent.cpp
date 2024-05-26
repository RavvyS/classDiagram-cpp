#include "TravelAgent.h"

TravelAgent::TravelAgent() {
    agentID = 0;
    name = "";
}

TravelAgent::TravelAgent(string uName, string uPass, int tID, string tName)
    : User(uName, uPass) {
    agentID = tID;
    name = tName;
}

void TravelAgent::displayTravelAgent() {
    cout << "Username : " << userName
        << endl << "Password : " << password
        << endl << "ManagerID : " << agentID
        << endl << "Manager Name : " << name << endl;
}

TravelAgent::~TravelAgent() {}