#include "Review.h"

Review::Review() {
	reviewID = 0;
	rating = 0;
	comment = "";
}
Review::Review(int rID, int rate, string revComment) {
	reviewID = rID;
	rating = rate;
	comment = revComment;
}
void Review::displayReview() {
	cout << "ReviewID : " << reviewID << endl << "Rating : " << rating << endl << "Review : " << comment << endl;
}
void Review::leaveReview() {

}
Review::~Review() {

}
