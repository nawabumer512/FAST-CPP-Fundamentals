// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;
int main() {
	cout << "+------+" << endl;

	for (int repeat = 0; repeat < 2; repeat++) {

		for (int i = 2; i >= 0; i--) {

			int left = i;
			int right = 5 - left;

			cout << "|"; // Print left border
						
			for (int j = 0; j < 6; j++) {
				if (j == left || j == right) {
					cout << "^";
				}
				else {
					cout << " ";
				}
			}
			cout << "|" << endl; // Print right border
		}
	} 

	cout << "+------+" << endl;
	for (int repeat = 0; repeat < 2; repeat++) {
		for (int i = 0; i < 3; i++) {

			int left = i;
			int right = 5 - left;

			cout << "|"; // Print left border
			for (int j = 0; j < 6; j++) {
				if (j == left || j == right) {
					cout << "v";
				}
				else {
					cout << " ";
				}
			}
			cout << "|" << endl; // Print right border
		}
	} 
	cout << "+------+" << endl;
	system("pause");
	return 0;
}