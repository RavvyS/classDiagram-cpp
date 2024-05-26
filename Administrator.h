#pragma once
#include <iostream>
#include <string>
#include "User.h"

class Report; // forward declarations
class RegisteredUser;
class Promotion;
class Package;
#define SIZE 20

using namespace std;
class Administrator : public User
{
private:
    int adminId;
    string name;
    Report* reports[SIZE];
    RegisteredUser* users[SIZE];
    Promotion* promotions[SIZE];
    Package* packages[SIZE];

public:
    Administrator();
    Administrator(string uName, string uPassword,int aId , string adminName);
    void viewReport(Report* reports);
    void manageUsersAccounts(RegisteredUser* users);
    void managePackages(Package* packages);
    void createPromotion(Promotion* promotion);
    void display();
    ~Administrator();
};

