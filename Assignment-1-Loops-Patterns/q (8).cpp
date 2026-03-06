// M Umar Farooq
// 25M-3030
//SE-1A


#include<iostream>
using namespace std;
int main()
{
	int lines, cheers;
	cout << "\n========================\n\n";
	cout << "Enter number of lines: ";
	cin >> lines;
	cout << "\n================================\n\n";
	cout << "Enter number of cheers per line: ";
	cin >> cheers;
	cout << endl;

	if (lines <= 0 || cheers <= 0) {
		cout << "\n===================================================\n\n";
		cout << "Please enter positive numbers for lines and cheers." << endl;
		cout << "\n===================================================\n";
		system("pause");
		return 0;
	}
	// Cheer Lines
	for (int i = 0; i < lines; i++)
	{  
		// Spaces
		for (int j = 0; j < i; j++)
			cout << "   ";

		// Cheers
		for (int k = 1; k <= cheers; k++)
		{
			cout << "Go ";
			if (k != cheers)
				cout << "Umer ";  
		}
		cout << endl;
	}

	system("pause"); 
	return 0;
}
