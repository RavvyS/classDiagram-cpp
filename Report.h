#pragma once
#include <string>
#include "Reservation.h"
using namespace std;

class Report
{
	private:
		int reportID;
		string reportType;
	public:
		Report();
		Report(int rID, string rType);
		void bookingTrendReport();
		void generateReports();
		void viewReports();
		void financialReport();
		~Report();
};

