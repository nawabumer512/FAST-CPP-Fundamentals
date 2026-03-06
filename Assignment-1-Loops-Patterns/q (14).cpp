// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i < 7; i++) {
		int starCount = 0, spaceCount = 0, slashCount = 0, backslashCount = 0;
		// Left stars
		for (int j = 6; j > i; j--) {
			cout << "*";
			starCount++;
		}


		// Left spaces
		for (int j = 0; j <= i; j++) {
			cout << " ";
			spaceCount++;
		}

		// Left slashes
		for (int j = 6; j > i; j--) {
			cout << "//";
			slashCount++;
		}

		// Right backslashes
		for (int j = 0; j < i; j++) {
			cout << "\\\\";
			backslashCount++;
		}

		// Right spaces
		for (int j = 0; j <= i; j++) {
			cout << " ";
			spaceCount++;
		}

		// Right stars
		for (int j = 6; j > i; j--) {
			cout << "*";
			starCount++;
		}

		cout << endl;

		//checks
		if (starCount != (6 - i) * 2)
			cout << "Start counting error!  " << (i + 1) << endl;
		if (spaceCount != (i + 1) * 2)
			cout << "Space counting error! " << (i + 1) << endl;
	}
	system("pause");
	return 0;
}
