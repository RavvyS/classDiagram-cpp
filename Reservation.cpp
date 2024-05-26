#include "Reservation.h"

Reservation::Reservation() {
    reservationID = 0;
    name = "";
    reservationDate = "";
    email = "";
    contact = "";
    noOfAdults = 0;
    noOfChildren = 0;
}
Reservation::Reservation(int rID, string Rname, string rDate, string Remail, string Rcontact, int rAdults, int rChild) {
    reservationID = rID;
    name = Rname;
    reservationDate = rDate;
    email = Remail;
    contact = Rcontact;
    noOfAdults = rAdults;
    noOfChildren = rChild;
}
void Reservation::displayReservation() {
    cout << "ReservationID : " << reservationID << endl
        << "Name : " << name << endl
        << "Reservation Date : " << reservationDate << endl
        << "Email : " << email << endl
        << "Contact : " << contact << endl
        << "No of Adults : " << noOfAdults << endl
        << "No of Children : " << noOfChildren << endl;
}
void Reservation::makeReservation() {

}
void Reservation::viewReservationDetails() {

}
void Reservation::cancelReservation() {

}
void Reservation::approveReservation() {


}
Reservation::~Reservation() {

}

 