#pragma once
#include <iostream>
#include <string>
#include "Trip.h"
#include "Package.h"
using namespace std;

class Trip; 
class Package;

class Promotion
{
private:
    int promotionID;
    string promotionName;
    float discountAmount;
    string startDate;
    string endDate;
    Trip* trip;
    Package* package;

public:
    Promotion();
    Promotion(int pId,string pName,float pDiscount,string pStartDate,string pEndDate,Trip* pTrip,Package* pPackage);
    void applyPromotionToTrip(Trip* trip);
    void applyPromotionToPackage(Package* package);
    void display();
    ~Promotion();
};

