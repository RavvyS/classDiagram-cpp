#pragma once
#include <iostream>
using namespace std;

class Reservation
{
private:
    int reservationID;
    string name;
    string reservationDate;
    string email;
    string contact;
    int noOfAdults;
    int noOfChildren;
public:
    Reservation();
    Reservation(int rID, string Rname, string rDate, string Remail, string Rcontact, int rAdults, int rChild);
    void displayReservation();
    void makeReservation();
    void viewReservationDetails();
    void cancelReservation();
    void approveReservation();
    ~Reservation();

};

