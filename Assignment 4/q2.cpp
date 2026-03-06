#include<iostream>
using namespace std;
int main()
{
	int arr[100], n, k;
	// Size Of Array
	cout << "Enter size of Array : ";
	cin >> n;
	// Value Of K
	cout << "Entr how far u want to shift the term : ";
	cin >> k;

	// Check K<N
	if (k >= n)
		cout << "Input Error! K must be smaller than N" << endl;
	else
	{
		// Taking Input till Nth term
		for (int i = 0; i < n; i++)
		{
			cout << "Enter number " << i + 1 << " : ";
			cin >> arr[i];
		}

		// Shifted outputs
		for (int j = n - k; j < n; j++) {
			cout << arr[j] << ", ";
		}
		// Remaining outputs
		for (int l = 0; l < n - k; l++) {
			cout << arr[l] << ", ";
		}
	}
	cout << "/n";


	system("pause");
	return 0;
}