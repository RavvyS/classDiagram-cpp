#include "Administrator.h"

Administrator::Administrator() : User("", ""){
	adminId = 0;
	name = "";
	for (int i = 0; i < SIZE; ++i) {
		reports[i] = nullptr;
		users[i] = nullptr;
		promotions[i] = nullptr;
		packages[i] = nullptr;
	}
}
Administrator::Administrator(string uName, string uPassword, int aId, string adminName) : User(uName,uPassword){
	adminId = aId;
	name = adminName;
}

void Administrator::display() {
	cout << "Administrator class, derived class from User" << endl;
	User::display();
	cout << "Admin Id : " << adminId << "\nAdmin Name : " << name << endl;
}

void Administrator::viewReport(Report* report) {}

void Administrator::manageUsersAccounts(RegisteredUser* user) {}

void Administrator::managePackages(Package* package) {}

void Administrator::createPromotion(Promotion* promotion) {}

Administrator::~Administrator() {
	cout << "Administrator Destructor runs..."<<endl << endl;
}
