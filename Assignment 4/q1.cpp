// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;

int main()
{
	int unique_num[20], count = 0, n;
	for (int i = 0; i < 20; i++)
	{
		cout << "Enter Number " << i + 1 << " : ";
		cin >> n;


		// Range Check
		if (n < 10 || n > 100)
		{
			cout << "============================================\nInput Error! Acceptable only Between (10-100).\n============================================" << endl;
			i--;
			cout << "\nAgain ";
		}
		else {
			// Duplicate Check
			bool isdup = false;

			for (int j = 0; j < count; j++)
			{
				if (n == unique_num[j]) {
					isdup = true;
					break;
				}
			}
			if (isdup) {
				cout << "==========\nDuplicate.\n==========" << endl;
				cout << "\nAgain ";
			}
			else
			{
				unique_num[count] = n;
				count++;
				
			}

		}
	}


	cout << "\n==========================================================\n\n";
	cout <<  "Total Numbers are : " << count << endl;
	for (int i = 0; i < count; i++)
		cout << unique_num[i] << " ,";
	cout << "\n\n==========================================================\n";

	system("pause");
	return 0;
}