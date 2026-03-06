// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
#include<string>
#include <iomanip>
using namespace std;
int main()
{

	//BILL & CONSUMER INFORMATION

	string connectionDate = "28 Dec 11";
	string edAt = "0";
	string billMonth = "Oct 21";
	string readingDate = "02-Nov-21";
	string issueDate = "03-Nov-21";
	string dueDate = "17-Nov-21";
	string consumerID = "07042005";
	string tariff = "A-1a(01)";
	string load = "2";
	string oldACNumber = "0";
	string division = "Westridge";
	string subDivision = "Tarnol pesh RD";
	string feederName = "Nust Road";
	string referenceNo = "25M-3030";  
	cout << "enter your roll no. (25M-xxx) :";
	cin >> referenceNo;
	string nameAndAddress ; 
	cout << "enter your name and address (without space) :";
	cin >> nameAndAddress;
    
	
	//METER DETAILS

	string meterNo = "123456";
	int previous = 9742;
	int present = 9942;
	int mf = 1; 
	int unitsConsumed = 3030;
	int units = (present - previous);
	int cost = units * 20;

	//BILLING CHARGES & CALCULATIONS
	//Double Data Type BEcause of several Divisions and MUtilications.

	double fuelPriceAdjustment = 700;
	double fcSurcharge = 90;
	double qtrTariff = -14;
	double tvFee = 35;
	double gst = 800;
	double gstOnFPA = 108;
	double totalFPA = 700;
	double lpsurcharge = 400;
	double total1 = fuelPriceAdjustment + fcSurcharge + qtrTariff;
	double total2 = tvFee + gst + gstOnFPA;
	double currentBill = total1 + total2;
	double payableWithinDueDate = currentBill + totalFPA;
	double payableAfterDueDate = payableWithinDueDate + lpsurcharge;

	//DISPLAY COMPLETE BILL 


	cout << "\n============================================================\n";
	cout << "                 ISB Electric Supply Company                 \n";
	cout << "============================================================\n";

	// --- Connection Info ---
	cout << left << setw(22) << "Connection Date"
		<< setw(15) << "ED@"
		<< setw(15) << "Bill Month"
		<< setw(15) << "Reading Date"
		<< setw(15) << "Issue Date"
		<< "Due Date" << endl;

	cout << left << setw(22) << connectionDate
		<< setw(15) << edAt
		<< setw(15) << billMonth
		<< setw(15) << readingDate
		<< setw(15) << issueDate
		<< dueDate << endl;

	cout << "\n--------------------------------------------------------------------\n";

	// --- Consumer Info (2x3 layout) ---
	cout << left << setw(25) << "Consumer ID:"
		<< setw(20) << "Tariff:"
		<< "Load:" << endl;
	cout << left << setw(25) << consumerID
		<< setw(20) << tariff
		<< load << endl;

	cout << left << setw(25) << "Old A/C Number:" << oldACNumber << endl;

	cout << "\nDivision: " << division << endl;
	cout << "Sub Division: " << subDivision << endl;
	cout << "Feeder Name: " << feederName << endl;
	cout << "Reference No: " << referenceNo << endl;
	cout << "Name & Address: " << nameAndAddress << endl;

	cout << "--------------------------------------------------------------------\n";

	// --- Meter Info ---
	cout << left << setw(15) << "Meter No:" << setw(15) << "Previous" << setw(15) << "Present"
		<< setw(10) << "MF" << "Units" << endl;

	cout << left << setw(15) << meterNo << setw(15) << previous << setw(15) << present
		<< setw(10) << mf << units << endl;

	cout << "--------------------------------------------------------------------\n";

	// --- Billing Section ---
	cout << "Fuel Price Adjustment:  " << fuelPriceAdjustment << endl;
	cout << "F.C Surcharge:           " << fcSurcharge << endl;
	cout << "QTR Tariff:              " << qtrTariff << endl;
	cout << "Total 1:                 " << total1 << endl;
	cout << "TV Fee:                  " << tvFee << endl;
	cout << "GST:                     " << gst << endl;
	cout << "GST on FPA:              " << gstOnFPA << endl;
	cout << "Total 2:                 " << total2 << endl;
	cout << "-------------------------------------------------------------\n";
	cout << "Current Bill:            " << currentBill << endl;
	cout << "Total FPA:               " << totalFPA << endl;
	cout << "Payable Within Due Date: " << payableWithinDueDate << endl;
	cout << "L.P. Surcharge:          " << lpsurcharge << endl;
	cout << "Payable After Due Date:  " << payableAfterDueDate << endl;
	cout << "-------------------------------------------------------------\n";

	cout << "\nThank you for using IESCO services!" << endl;
	cout << "For complaints, Call 118 or SMS to 8118.\n";

	cout << "====================================================================\n";
	cout << "                         END OF BILL                                \n";
	cout << "====================================================================\n";

	system("pause");
	return 0;
}