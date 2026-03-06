// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;
int main()
{
	int num[5];
	bool inp_error = false;

	cout << "==============================================\n" << endl;
	cout << "Problem 2 : \n==========\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number " << i+1 << " = ";
		cin >> num[i];
		cout << endl;

		if (num[i] < 1 || num[i]>30)
		{
			cout << "\n===========\n" << endl;
			cout << "Input Error!" << endl;
			cout << "\n===========" << endl;
			inp_error = true;
			break;
		}
	}

	if (inp_error != true)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int k = 1; k <= num[j]; k++)
				cout << "*";

			cout << endl;
		}
	}
	system("pause");
	return 0;
}