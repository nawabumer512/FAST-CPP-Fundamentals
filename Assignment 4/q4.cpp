#include<iostream>
using namespace std;
int main() {

	int arr[100], size;
	int sum = 0, sum_pair = 0;
	bool flag = false;

	cout << "Enter the size of array : ";
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter number : ";
		cin >> arr[i];

	}

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	if (sum % 2 != 0)
		cout << "\nNo Pair exist ! \n" << endl;
	else
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++) {

				sum_pair = arr[i] + arr[j];

				if (sum_pair == sum / 2) {
					cout << "Pair Exists! Elements are " << arr[i] << " and " << arr[j] << "." << endl;
					flag = true;
				}
			}
		}

	if (flag == false && sum % 2 == 0)
		cout << "No PAir Exist!" << endl;


	system("pause");
	return 0;
}