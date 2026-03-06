// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;
int main() {
	int lines;
	cout << "Enter number of lines (max 9): ";
	cin >> lines;

	if (lines > 9) {
		cout << "\n================================\n\n";
		cout << "Number of lines cannot exceed 9." << endl;
		cout << "\n================================\n";
		lines = 9;
	}
	cout << endl;
	int i = 1, j, k;
	while (i <= lines) {
		j = lines;
		while (j > i) {
			cout << " ";
			j--;
		}
		k = 1;
		while (k <= i) {
			cout << i;
			k++;
		}
		cout << endl;
		i++;
	}
	cout << endl;
	system("pause"); 
	return 0;
}
