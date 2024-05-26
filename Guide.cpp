#include "Guide.h"

Guide::Guide() {
    guideID = 0;
    name = "";
}

Guide::Guide(string uName, string pwd, int gID, string gName)
    : User(uName, pwd) {
    guideID = gID;
    name = gName;
}

void Guide::displayGuide() {
    cout << "Username : " << userName
        << endl << "Password : " << password
        << endl << "GuideID : " << guideID
        << endl << "Guide Name : " << name << endl;
}

void Guide::viewReview(Review* review) {

}

void Guide::leadSafariTours() {

}

void Guide::provideInformation() {

}

Guide::~Guide() {

}