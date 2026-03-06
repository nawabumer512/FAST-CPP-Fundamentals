#include<iostream>
using namespace std;
int main() {

	int arr[1000];

	for (int i = 0; i < 1000; i++)
		arr[i] = 1;

	for (int i = 2; i < 1000; i++)
	{
		for (int j = i+1; j < 1000; j++)
		{
			if (j%i == 0) 
				arr[j] = 0;
		}
	}

	cout << "Prme numbers are:" << endl;
	for (int i = 2; i < 1000; i++)
	{

		if (arr[i] == 1)
			cout << i << " ";

	}
	system("pause");
	return 0;
}