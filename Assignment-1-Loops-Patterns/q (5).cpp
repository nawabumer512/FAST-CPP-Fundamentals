// M UMar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;

int main() {
	int i, mod = 1;
	int x[50], y[50];

	cout << "Enter num 1 = ";
	cin >> x[0];
	cout << "Enter num 2 = ";
	cin >> y[0];

	// Positive number
	if (x[0] <= 0 || y[0] < 0) {
		cout << "\n=========================================\n\n";
		cout << "Error: Please enter positive integers only." << endl;
		cout << "\n=========================================\n";
		system("pause");
		return 0;
	}
	// For Acuuracy divisor should not be zero.
	if (y[0] == 0) {
		cout << "\n=========================================\n\n";
		cout << "Error: Second number must be non-zero." << endl;
		cout << "\n=========================================\n";

		system("pause");
		return 0;
	}

	for (i = 1; mod != 0; i++) {
		mod = x[i - 1] % y[i - 1];
		y[i] = mod;
		x[i] = y[i - 1];

		if (i >= 49) {
			cout << "\n============================================\n\n";
			cout << "Error: Too many iterations. Check input values." << endl;
			cout << "\n=============================================\n";
			system("pause");
			return 0;
		}
	}
	cout << "\n-------\n";
	cout << "Pairs :" << endl;
	cout << "-------\n\n";
	for (int j = 0; j < i; j++) {
		cout << "( " << x[j] << ", " << y[j] << " )" << endl;
	}
	cout << "\n=======================================================\n\n";
	cout << "So " << x[i - 1] << " is the greatest common divisor of "
		<< x[0] << " and " << y[0] << " ." << endl;
	cout << "\n=======================================================\n";

	system("pause");
	return 0;
}
