// M Umar Farooq
// 25M-3030
//SE-1A


#include<iostream>
using namespace std;
int main()
{
	int num, rev = 0, digit = 0, sum = 0;
	cout << "====================\n" << endl;
	cout << "Enter an integer: ";
	cin >> num;

	int m = num;
	while (num != 0)
	{
		digit = num % 10;
		rev = rev * 10 + digit;
		sum += digit;
		num = num / 10;
	}
	cout << "\n====================\n" << endl;
	cout << "Reverse of " << m << " is " << rev
		<< " and\nSum of digits is " << sum << " ." << endl;
	cout << "\n====================" << endl;
	system("pause");
	return 0;
}
