// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 


#include<iostream>
using namespace std;
int main()
{
	int totaleggs, pac1, pac2, pac3, pac4, pac5;  //Packings
	int lo1, lo2, lo3, lo4, lo5; //lo=Left Over

	cout << "Enter the total number of eggs:";
	cin >> totaleggs;

	//Packing 1
	pac1 = totaleggs / 30;
	lo1 = totaleggs % 30;
	cout << "Number of 30 eggs packing:" << pac1 << "\tNumber of leftover eggs:" << lo1 << endl;

	//Packing 2
	pac2 = totaleggs / 24;
	lo2 = totaleggs % 24;
	cout << "Number of 24 eggs packing:" << pac2 <<"\tNumber of leftover eggs:" << lo2 << endl;

	//Packing 3
	pac3 = totaleggs / 18;
	lo3 = totaleggs % 18;
	cout << "Number of 18 eggs packing:" << pac3 << "\tNumber of leftover eggs:" << lo3 << endl;

	//Packing 4
	pac4 = totaleggs / 12;
	lo4 = totaleggs % 12;
	cout << "Number of 12 eggs packing:" << pac4 << "\tNumber of leftover eggs:" << lo4 << endl;

	//Packing 5
	pac5 = totaleggs / 6;
	lo5 = totaleggs % 6;
	cout << "Number of 06 eggs packing:" << pac5 << "\tNumber of leftover eggs:" << lo5 << endl;

	system("pause");
	return 0;

}