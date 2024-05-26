#pragma once
#include <iostream>
#include <string>
#include "User.h"
class Reservation;
class Payment;
class Review;
class Donation;

#define SIZE 20
using namespace std;

class RegisteredUser : public User
{
private:
	int userID;
	string name;
	string address;
	string dob;
	string contact;
	string email;

	Reservation* reservations[SIZE];
	Payment* Payments[SIZE];
	Review* reviews[SIZE];
	Donation* donations[SIZE];
public:
	RegisteredUser();
	RegisteredUser(string userName, string password, int UID, string uName, string uAddress, string uDOB, string uContact, string Uemail);
	string getName();
	void makeReservation(Reservation* reservations);
	void makePayment(Payment* payments);
	void makeDonation(Donation* donations);
	void display();
	~RegisteredUser();
};