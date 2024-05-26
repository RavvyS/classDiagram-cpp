#include "Payment.h"

Payment::Payment() {
    paymentID = 0;
    amount = 0.0;
    paymentDate = "";
    status = "";
}
Payment::Payment(int pID, float pamount, string pDate, string pStatus) {
    paymentID = pID;
    amount = pamount;
    paymentDate = pDate;
    status = pStatus;
}
void Payment::displayPayment() {
    cout << "PaymentID : " << paymentID << endl <<
        "Amount : " << amount << endl <<
        "Payment Date : " << paymentDate << endl <<
        "Status : " << status << endl;
}
void Payment::processPayment(Reservation* res) {

}
void Payment::trackPaymentStatus() {

}
