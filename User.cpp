#include "User.h"

User::User() {
	userName = "";
	password = "";
}

User::User(string uName, string pwd) {
	userName = uName;
	password = pwd;
}

void User::Register() {

}

void User::login() {

}

void User::display() {
	cout << "Username : " << userName << endl << "Password : " << password << endl;
}

User::~User() {

}