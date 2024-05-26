// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Administrator.h"
#include "Promotion.h"
#include "Boat.h"
#include "Report.h"
#include "RegisteredUser.h"
#include "Package.h"
#include "Trip.h"
#include "Reservation.h"
#include "Payment.h"
#include "TravelAgent.h"
#include "Donation.h"
#include "Review.h"
using namespace std;

int main()
{
    //data insert to User user  
    User* user = new User("Ashen", "Pass1234");
    cout << "Details of User : " << endl;
    user->display(); //display User details 
    cout << endl << endl;

    delete user;

    //data insert to Donation  
    Donation* don = new Donation(001, 100000.0, "2024-05-25", "Ashen Amantha", "ashen2003@gmail.com", "0757892367");
    cout << "Details of Donation : " << endl;
    don->displayDonation(); //display Donation  
    cout << endl << endl;

    delete don;

    //data insert to Guide  
    Guide* guide = new Guide("Ravidu1234", "PW23445", 001, "Ravidu");
    cout << "Details of Guide : " << endl;
    guide->displayGuide(); //display Guide  
    cout << endl << endl;

    delete guide;

    //data insert to Review  
    Review* rev = new Review(001, 5, "Splendid voyage, breathtaking sights, expert guides.");
    cout << "Details of Review : " << endl;
    rev->displayReview(); //display Review  
    cout << endl << endl;

    delete rev;

    //data insert to Manager  
    Manager* manager1 = new Manager("Kalana19", "Wathsala1234", 001, "Kalana Wathsala");
    cout << "Details of Manager : " << endl;
    manager1->displayManager(); //display Manager  
    cout << endl << endl;

    delete manager1;

    //data insert to Administrator  
    Administrator* admin = new Administrator("nilakshi", "nilakshi123", 1, "Nilakshi Madubashini");
    admin->display(); //display Administrator   
    
    delete admin;

    //data insert to Trip  
    Trip* trip1 = new Trip(1, "Weligama", "2024-06-01", "2024-06-10");

    //data insert to Package  
    Package* package1 = new Package(1, "Boat Safari", "On a boat safari, take in the natural beauty and wildlife while enjoying comfort.");

    //data insert to Promotion  
    Promotion* promotion = new Promotion(1, "Summer Sale", 10.0, "2024-06-01", "2024-06-30", trip1, package1);
    promotion->display(); //display Promotion details  

    
    delete promotion;

    //data insert to Boat  
    Boat* boat1;
    boat1 = new Boat(001, "A", trip1);
    boat1->registerBoat(); 
    boat1->display();// display register boat details
    delete boat1;

    
    //data insert to Registered User  
    RegisteredUser* regUser1;
    regUser1 = new RegisteredUser("mashiKavindi","kp@00",1, "Imasha Kavindi", "Colombo", "2000-09-12", "0725444444", "imasha@gmail.com");
    regUser1->display(); //display Registered User  

    delete regUser1;

    //data insert to Package  
    Package* package2 = new Package(2, "Madu River Safari", "Take a peaceful river trip to see unique species and stunning scenery.");
    package2->display(); //display Package details  

    delete package2;

    //data insert to Travel Agent
    TravelAgent* tAgent = new TravelAgent("Ravidu", "RaviduPW234", 001, "Ravidu Sadun");
    cout << "Details of Travel Agent : " << endl;
    tAgent->displayTravelAgent(); //display Travel Agent
    cout << endl << endl;

    delete tAgent;

    //data insert to Reservation
    Reservation* reservation = new Reservation(1234, "Kamal", "2024-05-23", "kamal2003@gmail.com", "0763452312", 4, 2);
    cout << "Details of Reservation : " << endl;
    reservation->displayReservation(); //display Reservation
    cout << endl << endl;

    delete reservation;

    //data insert to Payment
    Payment* payment = new Payment(1111, 50000.0, "2024-05-25", "Payment Pending");
    cout << "Details of Reservation : " << endl;
    payment->displayPayment(); //display Payment
    cout << endl << endl;

    delete payment;

    return 0;
}

