// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
using namespace std;
int main()
{
	int num1, num2, r1, r2;
	cout << "Welcome To The Grid Patteren Program.\n==========================================================" << endl;
	cout << "Enter The First Number: ";
	cin >> num1;
	if (num1 >= 1 && num1 <= 81) { //1
		cout << "Enter The Second Number: ";
		cin >> num2;
		if (num1 >= 1 && num2 <= 81) {//2
			r1 = num1 % 18;
			r2 = num2 % 18;

			if (((r1 == 1) || (r1 == 4) || (r1 == 7) || (r1 == 12) || (r1 == 15) || (r1 == 18)) && ((r2 == 1) || (r2 == 4) || (r2 == 7) || (r2 == 12) || (r2 == 15) || (r2 == 18)))
				cout << "Colour is Grey." << endl;
			else {//3

				if (((r1 == 2) || (r1 == 5) || (r1 == 8) || (r1 == 10) || (r1 == 13) || (r1 == 16)) && ((r2 == 2) || (r2 == 5) || (r2 == 8) || (r2 == 10) || (r2 == 13) || (r2 == 16)))
					cout << "Colour is Blue." << endl;
				else
				{//4

					if (((r1 == 3) || (r1 == 6) || (r1 == 9) || (r1 == 11) || (r1 == 14) || (r1 == 17)) && ((r2 == 3) || (r2 == 6) || (r2 == 9) || (r2 == 11) || (r2 == 14) || (r2 == 17)))
						cout << "Colour is Red." << endl;
					else
						cout << "Different Colours." << endl;

				}//4
			}//3
		}//2
	}//1
	cout << "\nThanks For using this Program.\n==========================================================" << endl;
	system("pause");
	return 0;
}