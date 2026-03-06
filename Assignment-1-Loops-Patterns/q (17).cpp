// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;

int main() {
	int terms;
	cout << "Enter the number of terms: ";
	cin >> terms;
	cout << endl;

	int a = 1, b = 2;

	while (terms--) {
		cout << a << "/" << b;
		if (terms != 0) 
		{ 
			cout << ",";
		}
		b = b * 2;
		a = b - 1;
	}

	cout << "........" << endl;
	cout << endl;

	system("pause");
	return 0;
}
