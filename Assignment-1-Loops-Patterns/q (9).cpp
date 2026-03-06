// M Umar Farooq
// 25M-3030
// SE-1A



#include<iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter the number of rows :";
	cin >> n;
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= 2 * i; j++)
			cout << "\\";
		for (int j = 0; j <= 2 * (n - i); j++)
			cout << "!!";
		for (int j = 1; j <= i; j++)
			cout << "//";
		cout << endl;
	}

	system("pause");
	return 0;
}
