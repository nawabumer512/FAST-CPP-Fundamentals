// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
using namespace std;
int main()
{
	int ta = 0, cal500 = 0, cal1000 = 0, cal5000 = 0;

	cout << "\t Welcome To the Bank.\n==================================" << endl;
	cout << "Enter the Amount to be Withdrawn:";
	cin >> ta;
	
	if (ta % 500 != 0)
		cout << "Only multiples of 500 are accepted." << endl;
	else {
		if (ta >= 50000)
			cout << "Warning! Daily Withdrawn Limit Exceeded (50,000) " << endl;
		else {
			ta = ta - 500;  //rule 1
			cal500 = 1;
			if (ta >= 5000)
				cal5000 = ta % 5000;
			    cal5000 = ta / 5000;
			ta = ta - 5000 * cal5000;

			if (ta >= 1000 && ta < 5000)
				cal1000 = ta % 1000;
			    cal1000 = ta / 1000;
			ta = ta - 1000 * cal1000; 

			if (ta >= 500 && ta < 1000)
				cal500 = ta % 500;
			    cal500 = ta / 500 + 1;
			ta = ta - 500 * cal500;

			cout << "Rs. 5000 notes are:" << cal5000 << endl;
			cout << "Rs. 1000 notes are:" << cal1000 << endl;
			cout << "Rs. 500  notes are:" << cal500 << endl;
			cout << "==================================\n\tThanks for Choosing us!" << endl;

		} //if2
	} //if1
	system("pause");
	return 0;
}