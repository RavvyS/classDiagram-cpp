#include "RegisteredUser.h"



RegisteredUser::RegisteredUser()
{
	userID = 0;
	name = "";
	address = "";
	dob = "";
	contact = "";
	email = "";
}

RegisteredUser::RegisteredUser(string userName, string password,int UID, string uName, string uAddress, string uDOB, string uContact, string Uemail)
	:User(userName, password){
	userID = UID;
	name = uName;
	address = uAddress;
	dob = uDOB;
	contact = uContact;
	email = Uemail;
}

void RegisteredUser::display() {
	cout << endl << endl << "RegisteredUser class, derived class from User" << endl;
	User::display();
}
RegisteredUser::~RegisteredUser() {
	cout << "RegisteredUser Destructor runs..." << endl << endl;
}

void RegisteredUser::makeReservation(Reservation* reservations) {}
void RegisteredUser::makePayment(Payment* payments){}
void RegisteredUser::makeDonation(Donation* donations){}

string RegisteredUser:: getName()
{
	return name;
}
