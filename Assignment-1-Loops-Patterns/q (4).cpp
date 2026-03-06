// M Umar Farooq
// 25M-3030
// SE-1A

#include <iostream>
using namespace std;
int main() {
	double pi[320], term;
	int denom, sign;
	int i = 1;

	pi[0] = 0.0;

	while (i <= 319) {
		denom = 2 * (i - 1) + 1;
		sign = (i % 2 == 0) ? -1 : 1;
		term = 4.0 * sign / denom;
		pi[i] = pi[i - 1] + term;

		if (pi[i] >= 3.135 && pi[i] <= 3.145)
			break;

		i++;
	}

	for (int j = 1; j <= i; j++) {
		cout << "Term no. " << j << " = " << pi[j] << endl;
	}

	cout << "\nApproximation of pi after " << i << " terms: " << pi[i] << endl;

	system("pause");
	return 0;
}
