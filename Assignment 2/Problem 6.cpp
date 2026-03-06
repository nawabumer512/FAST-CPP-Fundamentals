// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
using namespace std;
int main()
{
	float tax, sal;   // Here ft=Full Time, pt=Part time, ah= Adhoc , Sal1= actual salary without tax, sal= Net Payable amount
	int days = 0, wh = 8, sal1 ;                 //working hours

	cout << "Welcome to the Salary Calculator Program.\n============================================" << endl;
	cout << "Enter the number of days of work: ";
	cin >> days;

	if (days >= 25 && days <= 30) {

		cout << "\n\tEmployee is a Full-Time Worker.\n============================================" << endl;
		sal1 = days*wh * 900;
		tax = sal1 * 5 / 100;
		sal = sal1 - tax;
		cout << " Salary of Employeee is:\t" << "Rs." << sal1 << "\n Tax Deductions are:\t\t" << "Rs." << tax << "\n Net Payable amount is:\t\t" << "Rs." << sal << endl;
		cout << "\t(Have a nice Day!)\n============================================" << endl;

	}
	if (days >= 15 && days < 25) {

		cout << "\n\tEmployee is a Part-Time Worker.\n============================================" << endl;
		sal1 = days*wh * 850;
		tax = sal1 * 7 / 100;
		sal = sal1 - tax;
		cout << " Salary of Employeee is:\t" << "Rs." << sal1 << "\n Tax Deductions are:\t\t" << "Rs." << tax << "\n Net Payable amount is:\t\t" << "Rs." << sal << endl;
		cout << "\t(Have a nice Day!)\n============================================" << endl;

	}
	if (days < 15) {

		cout << "\n\tEmployee is a Adhoc Worker.\n============================================" << endl;
		sal1 = days*wh * 600;
		tax = sal1 * 10 / 100;
		sal = sal1 - tax;
		cout << " Salary of Employeee is:\t" << "Rs." << sal1 << "\n Tax Deductions are:\t\t" << "Rs." << tax << "\n Net Payable amount is:\t\t" << "Rs." << sal << endl;
		cout << "\t(Have a nice Day!)\n============================================" << endl;

	}
	system("pause");
	return 0;
}