// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
using namespace std;
int main()
{
	int day, month, year, year4, year2;
	char result;

	cout << "Welcome to Magic Date Calculator Program.\n=================================================\n" << endl;
	cout << "Enter the day:";
		cin >> day;
		if (day > 30)
			cout << "There are 30 days in month, Not " << day << "." << endl;
		else {
			cout << "Enter the month:";
			cin >> month;

			if (month > 12)
				cout << "There are 12 months in a year, Not " << month << "." << endl;
			else {
				cout << "Enter the year:";
				cin >> year;
				if (year >= 1000 && year <= 9999)  //Taking digits only.
				{
					year2 = year % 100; // Taking last Two Digits onlt.

					result = (month*day == year2) ? 1 : 0;
					if (result == 0)
						cout << "Date is not magic date." << endl;
					else
						cout << "Date is a magic date." << endl;


					
				}
				else
					cout << "Year must be in 4 digits.\nFor e.g: 2025 (xxxx)." << endl;
			}
		}
		cout << "\n=================================================\nThanks For using This Program." << endl;
	system("pause");
	return 0;

}