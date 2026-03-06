// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;
int main()
{
	int running = 1, score = 0, count = 0;
	float sum = 0, mean = 0;
	char ans;
	cout << "==============================================\n" << endl;
	cout << "Problem 2 : \n==========\n";
	while (running)
	{
		cout << "\nEnter Your Scores = ";
		cin >> score;
		count += 1;
		sum += score;

		cout << "\n===================================" << endl;
		cout << "Want to enter more score ? (y/n) : ";
		cin >> ans;
	
		if (ans != 'y' && ans != 'n')
		{
			cout << "\n===========\n" << endl;
			cout << "Input Error!" << endl;
			cout << "\n===========" << endl;
			running = 0;
			cout << "\n-->> Average for previous inputs is :\n";
		}
		else
			if (ans == 'n')
				running = 0;

	}
	mean = sum / count;
	cout << "\n==============================================" << endl;
	cout << "\n-->> Mean or Average = ( " << mean << " )" << endl;
	cout << "\n==============================================" << endl;



	system("pause");
	return 0;
}