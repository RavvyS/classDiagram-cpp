#include "Donation.h"

Donation::Donation() {
	donationID = 0;
	amount = 0.0;
	donationDate = "";
	name = "";
	email = "";
	contact = "";
}
Donation::Donation(int dID, float dAmount, string dDate, string dName, string dEmail, string dContact) {
	donationID = dID;
	amount = dAmount;
	donationDate = dDate;
	name = dName;
	email = dEmail;
	contact = dContact;
}
void Donation::displayDonation() {
	cout << "DonationID : " << donationID << endl
		<< "Amount : " << amount << endl
		<< "Donation Date : " << donationDate << endl
		<< "Name : " << name << endl
		<< "Email : " << email << endl
		<< "Contact : " << contact << endl;
}
void Donation::makeDonation() {

}
Donation::~Donation() {

}
