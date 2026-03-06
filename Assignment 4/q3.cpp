#include<iostream>
using namespace std;
int main()
{
	int arr[100], L, K, N, temp_arr[100];

	cout << "Enter size of array : ";
	cin >> N;


	for (int i = 0; i < N; i++) {
		cout << "Enter number " << i + 1 << " : ";
		cin >> arr[i];
		temp_arr[i] = arr[i];
	}

	// Sorting the Given Data For ease.
	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];  // concept of swaping 
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	// Input Value of K
	bool running = true;
	while (running)
	{

		cout << "Enter Value Of K : ";
		cin >> K;

		if (K <= N)
			running = false;
		else
		{
			cout << "Input Error! K must Be less than or equal to N ." << endl;
			cout << "Again ";
		}
	}

	// Input Value of L
	running = true;
	while (running)
	{

		cout << "Enter Value Of L : ";
		cin >> L;

		if (L <= N)
			running = false;
		else
		{
			cout << "\nInput Error! L must Be less than or equal to N ." << endl;
			cout << "Again ";
		}
	}

	// Index Finding.
	int temp_indexk = 0, temp_indexl = 0;
	for (int i = 0; i < N; i++)
	{
		if (arr[N - K - 1] == temp_arr[i])
			temp_indexk = i;

		if (arr[L - 1] == temp_arr[i])
			temp_indexl = i;
	}
	cout << "\n====================================================\n\n";
	cout << " Highest Kth is : " << arr[N - K - 1] << " and index is " << temp_indexk << " ." << endl;
	cout << " Lowest Lth is : " << arr[L - 1] << " and index is " << temp_indexl << " ." << endl;
	cout << "\n====================================================\n";



	system("pause");
	return 0;
}