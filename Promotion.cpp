#include "Promotion.h"

Promotion::Promotion() {
    promotionID = 0;
    promotionName = "";
    discountAmount = 0.0;
    startDate = "";
    endDate = "";
    trip = nullptr;
    package = nullptr;
}
Promotion::Promotion(int pId, string pName, float pDiscount, string pStartDate, string pEndDate, Trip* pTrip, Package* pPackage) {
    promotionID = pId;
    promotionName = pName;
    discountAmount = pDiscount;
    startDate = pStartDate;
    endDate = pEndDate;
    trip = pTrip;
    package = pPackage;
}

void Promotion::display() {
    cout << "Promotion Details : \n"
        << "Promotion Id: " << promotionID
        << "\nDiscount: " << discountAmount
        << "\nPromotion Name: " << promotionName
        << "\nStart Date : " << startDate
        << "\nEnd Date : " << endDate << endl ;
}

void Promotion::applyPromotionToTrip(Trip* trip) {}

void Promotion::applyPromotionToPackage(Package* package) {}

Promotion::~Promotion(){
    cout << "Promotion Destructor runs..." << endl;
}