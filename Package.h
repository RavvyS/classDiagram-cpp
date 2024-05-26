#pragma once
#include <iostream>
#include <string>

#define SIZE 20
using namespace std;
class Trip;
class Package 
{
private:
    int packageID;
    string packageName;
    string packageDetails;
    Trip* trips[SIZE];

public:
    Package();
    Package(int pID, string pName, string pDetails);
    void showPackage();
    void showAvailability();
    void display();
    ~Package();
};

