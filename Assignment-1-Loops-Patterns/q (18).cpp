// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;
int main() {
	int n = 30;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <10; j++) {
			if (j == i % 10 || j == 9 - (i % 10))
				cout << "*";
			else
				cout << "  ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}