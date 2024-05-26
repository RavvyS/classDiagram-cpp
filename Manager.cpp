#include "Manager.h"


Manager::Manager() {
    managerID = 0;
    name = "";
}

Manager::Manager(string uName, string uPass, int mID, string mName)
    : User(uName, uPass) {
    managerID = mID;
    name = mName;
}

void Manager::displayManager() {
    cout << "Username : " << userName
        << endl << "Password : " << password
        << endl << "ManagerID : " << managerID
        << endl << "Manager Name : " << name << endl;
}

Manager::~Manager() {

}