#pragma once
#include <iostream>
using namespace std;
#include <string.h>

class User
{
protected:
	string userName;
	string password;

public:
	User();
	User(string uName, string pwd);
	void Register();
	void login();
	void display();
	~User();
};

