// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 


#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float i, u = 1.234, p = 3.334, result, result1, result2;
	cout << "Enter The value of i:";
	cin >> i;
	if (i > 0)
	{
		result1 = sqrt(u*(sqrt(i*i*i))*(i*i - 1));  //Numenator

		result2 = (sqrt(p*(i)-2)) + (sqrt(p*(i)-1)); //Denominator

		result = result1 / result2;                  // Final Answer
		cout << "Final answer is:" << result << endl;
	}
	else
		cout << "negative input of i is not allowed." << endl;
	system("pause");
	return 0;


}