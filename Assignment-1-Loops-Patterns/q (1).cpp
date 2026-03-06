// M Umar Farooq
// 25M-3030
// SE-1A

#include<iostream>
using namespace std;
int main()
{ 
	long long x = 0, y = 0, min = 30000, fun, xstart = 0, xend = 0, ystart = 0, yend = 0, ytemp;
	cout << "==============================================\n" << endl;
	cout << "Problem 1 : \n==========\n\n";

	// Initialzing Domain of X.
	cout << "Enter Starting Value Of X : ";
	cin >> xstart;

	cout << "\nEnter Ending Value Of X : ";
	cin >> xend;

	// Initialzing Domain of Y.
	cout << "\nEnter Starting Value Of Y : ";
	cin >> ystart;

	cout << "\nEnter Ending Value Of Y : ";
	cin >> yend;

	if (xstart >= xend || ystart >= yend)
	{
		cout << "\n==============================================" << endl;
		cout << "\nValue Input Error! Starting value Should be less than ending value." << endl;
		cout << "\n==============================================" << endl;
	}

	else
	{
		while (xstart <= xend)  //For X values.
		{
			ytemp = ystart;
			while (ytemp <= yend)  //For Y values.
			{
				fun = (1 - xstart)*(1 - xstart) + 100 * ((ytemp - xstart*xstart)*(ytemp - xstart*xstart));
				
				// Checking Minimum Answer.
				if (fun < min) {
					min = fun;
					x = xstart;
					y = ytemp;
				}
				ytemp++;
			}
			xstart++;
		}
		cout << "\n==============================================" << endl;
		cout << "\n-->> Minimum Answer = ( " << min << " )" << endl;
		cout << "\nAt value of X = " << x << " and Value of Y = " << y << endl;
		cout << "\n==============================================" << endl;

	}
	system("pause");
	return 0;
}



