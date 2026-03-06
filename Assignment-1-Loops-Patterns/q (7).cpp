// M Umar Farooq
// 25M-3030
//SE-1A


#include<iostream>
using namespace std;

int main()
{
	int num, digit = 0, sum = 0, i = 0;

	cout << "=======================\n\n";
	cout << "Enter a binary number: ";
	cin >> num;

	int temp = num;
	while (temp != 0)
	{
		int d = temp % 10;
		if (d != 0 && d != 1)
		{
			cout << "\n==========================================\n\n";
			cout << "Error: Please enter a valid binary number." << endl;
			cout << "\n==========================================\n";
			system("pause");
			return 0;
		}
		temp = temp / 10;
	}

	// Binary into Decimal conversion
	while (num != 0)
	{
		digit = num % 10;
		int pow = 1;
		for (int j = 0; j < i; j++)
			pow *= 2;
		sum += digit * pow;
		num = num / 10;
		i++;
	}
	cout << "\n==========================\n\n";
	cout << "Decimal number is " << sum << endl;
	cout << "\n==========================\n";

	system("pause");
	return 0;
}

