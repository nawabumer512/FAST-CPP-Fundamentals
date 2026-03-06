// M Umar Farooq
// 25M-3030
// Software Engneering - 1A
//Assignment 2 

#include<iostream>
using namespace std;
int main()
{
	short min = 0, sec = 0, hour = 0, num = 0;
	cout << "Enter a two-byte time value:";
	cin >> num;

	//logic is : we have to check the binary of a number step by step. so
	// num % 1 actually tells us the weather the last digit of binary is 1 or 0.
	//next difficulty is that how to check the upcoming binary, for this we will shift the digit.

	//For Seconds , as second is for 6 bit which means (0-5) bits out of 16 bits.
	if (1 & (num >> 0))
		sec = sec + 1; 

	if (1 & (num >> 1))
		sec = sec + 2;

	if (1 & (num >> 2))
	  sec = sec + 4;

	if (1 & (num >> 3))
		sec += 8;

	if (1 & (num >> 4))
		sec += 16;

	if (1 & (num >> 5))
		sec += 32;

	//For minutes , as minutes is also for 6 bit which means (6-11) bits out of 16 bits.
	if (1 & (num >> 6))
		min += 1;

	if (1 & (num >> 7))
		min += 2;

	if (1 & (num >> 8))
		min += 4;

	if (1 & (num >> 9))
		min += 8;

	if (1 & (num >> 10))
		min += 16;

	if (1 & (num >> 11))
		min += 32;

	//For hours , as hour is  for 4 bit which means (12-15) bits out of 16 bits.

	if (1 & (num >> 12))
		hour += 1;

	if (1 & (num >> 13))
		hour += 2;

	if (1 & (num >> 14))
		hour += 4;

	if (1 & (num >> 15))
		hour += 8;


	cout << "Time is " << hour << " hour " << min << " minutes and " << sec << " seconds." << endl;

	system("pause");
	return 0;
}
