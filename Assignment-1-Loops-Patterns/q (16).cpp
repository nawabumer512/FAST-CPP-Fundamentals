// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter Amount in PKR: ";
	cin >> num;

	bool ans = false;

	// possible counts of 6 PKR coins
	for (int a = 0; a <= num; a++) {

		// possible counts of 9 PKR coins
		for (int b = 0; b <= num; b++) {
			
			// possible counts of 20 PKR coins
			for (int c = 0; c <= num; c++) {
				if (6 * a + 9 * b + 20 * c == num) {
					cout << "It is possible to exchange " << num << " PKR with a combination of 6, 9, and 20 PKR." << endl;
					ans = true;
					break; // Stop inner loop
				}
			}
			if (ans) break; // Stop middle loop
		}
		if (ans) break; // Stop outer loop
	}

	if (!ans) {
		cout << "Not Possible" << endl;
	}
	system("pause");
	return 0;
}
