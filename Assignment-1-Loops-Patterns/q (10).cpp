// M Umar Farooq
// 25M-3030
//SE-1A


#include<iostream>
using namespace std;
int main() {
	int lines = 6; 
	int i = 0;

	// # first hash
	while (i < lines) {
		cout << "#";

		// Spaces
		int j = 0;
		while (j < i) {
			cout << " ";
			j++;
		}

		// Print second '#'
		cout << "#";

		cout << endl;
		i++;
	}
	system("pause");
	return 0;
}
