#pragma once
#include <string>
#include "RegisteredUser.h"
#include "Guide.h"

class Review {
private:
	int reviewID;
	int rating;
	string comment;
	Guide* guide;
public:
	Review();
	Review(int rID, int rate, string revComment);
	void displayReview();
	void leaveReview();
	~Review();
};

