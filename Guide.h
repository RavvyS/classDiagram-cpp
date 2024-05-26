#pragma once
#include <string>
#include "User.h"
class Review;
class Guide : public User {
    private:
        int guideID;
        string name;
    public:
        Guide();
        Guide(string uName, string uPass, int gID, string gName);
        void displayGuide();
        void viewReview(Review* review);
        void leadSafariTours();
        void provideInformation();
        ~Guide();
};

