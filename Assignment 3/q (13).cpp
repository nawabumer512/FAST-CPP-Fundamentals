// M Umar Farooq
// 25M-3030
// SE-1A


#include <iostream>
using namespace std;

int main() {
	int i = 1;
	const int lineLength = 60;
	int barPositions[] = { 10, 20, 30, 40, 50, 60 };
	bool barCheckPassed = true;

	for (i = 1; i <= lineLength; i++) {
		if (i % 10 == 0)
			cout << "|";
		else
			cout << " ";
	}
	cout << endl;

	int j = 1;
	int count = 1;
	bool digitCheckPassed = true;
	char lastDigits[ lineLength + 1] = { 0 };  

	while (count <= lineLength) {
		if (j != 10) {
			cout << j;
			lastDigits[count - 1] = '0' + j;  
			j++;
		}
		else {
			j = 0;
			cout << j;
			lastDigits[count - 1] = '0' + j;
			j++;
		}
		count++;
	}
	cout << endl;

	// Now checking if digits are cycling correctly
	for (int idx = 0; idx < lineLength; idx++) {
		char expectedDigit = '0' + ((idx % 10 == 9) ? 0 : (idx % 10 + 1));
		if (lastDigits[idx] != expectedDigit) {
			digitCheckPassed = false;
			cout << "Error! Digit mismatch. " << (idx + 1)
				<< ". Expected: " << expectedDigit << ", Got: " << lastDigits[idx] << endl;
		}
	}

	// Result
	cout << "\n==============================\n\n";
	if (digitCheckPassed)
		cout << "Digit sequence check PASSED." << endl;
	else
		cout << "Digit sequence check FAILED." << endl;

	cout << "\n==============================\n";

	system("pause");
	return 0;
}



