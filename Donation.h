#pragma once
#include <string>
#include <iostream>
using namespace std;
class Donation
{
private:
	int donationID;
	float amount;
	string donationDate;
	string name;
	string email;
	string contact;
public:
	Donation();
	Donation(int dID, float dAmount, string dDate, string dName, string dEmail, string dContact);
	void displayDonation();
	void makeDonation();
	~Donation();
};

