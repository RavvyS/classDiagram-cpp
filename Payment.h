#pragma once
#include <string>
#include <iostream>
using namespace std;
#include "Reservation.h"
class Payment
{
private:
    int paymentID;
    float amount;
    string paymentDate;
    string status;

public:
    Payment();
    Payment(int pID, float pamount, string pDate, string pStatus);
    void displayPayment();
    void processPayment(Reservation* res);
    void trackPaymentStatus();
};

