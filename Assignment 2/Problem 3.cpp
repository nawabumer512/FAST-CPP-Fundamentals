// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	short num, result;
	cout << "Enter a number:";
	cin >> num;
	//binary of 63 is 111111 (6 digits)
	result = (num << 5) + (num << 4) + (num << 3) + (num << 2) + (num << 1) + (num << 0);
	cout << "Final Answr is:" << result << endl;

	//Other Method:
	/*short Result = (num << 6);
	result = Result - num;
	cout << <<"Answer:"<<Result << endl;*/

	system("pause");
	return 0;
}
	

