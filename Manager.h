#pragma once
#include <iostream>
#include "User.h"
#include "Report.h"
using namespace std;

class Manager : public User
{
private:
    int managerID;
    string name;
    Report* report;
public:
    Manager();
    Manager(string uName, string uPass, int mID, string mName);
    void displayManager();
    ~Manager();
};
