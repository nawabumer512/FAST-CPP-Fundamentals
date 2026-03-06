// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;
int main() {
	int n, p;
	cout << "\n==========================\n\n";
	cout << "Enter the number of rows: ";
	cin >> n;

	cout << "\n=============================================\n\n";
	cout << "Enter how many pyramids you want to print: ";
	cin >> p;

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= p; j++) {

			for (int k = 1; k <= n - i; k++) {
				cout << " ";
			}

			for (int l = 1; l <= 2 * i - 1; l++) {
				cout << "*";
			}

			for (int k = 1; k <= n - i; k++) {
				cout << " ";
			}

		}

		cout << endl; 

	} 

	system("pause"); 
	return 0;        
}

