// M Umar Farooq
// 25M-3030
// SE-1A


#include<iostream>
using namespace std;
int main() {
	int j;
	int counter = 1;
	for (int i = 1; i <= 9; i++) {
		for (int j = 9; j >= i; j--) {
			cout << " ";
		}
		for (j = 1; j <= i; j++) {
			cout << j;

		}
		for (int k = j - 2; k >= 1; k--) {
			cout << k;
		}
		cout << endl;
	}
	for (int i = 8; i >= 1; i--) {
		for (int j = 8; j >= i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << k;

		}
		cout << endl;
	}

	system("pause");
	return 0;

}
