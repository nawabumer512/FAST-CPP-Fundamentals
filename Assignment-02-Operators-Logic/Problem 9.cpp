// M Umar Farooq
// 25M-3030
// Software Engineering - 1A
// Assignment 2 


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{ 
	srand(time(0));
	int maximumvalue;
	float rand1, rand2, ex, exans;
	char op, sum = '+', subt = '-', mul = '*', div = '/', ans, ansy ='Y', ansn ='N';

	cout << "Choose any Operation for Exercise.\n\n1) Sum\t\t+\n2) Subtract\t-\n3) Multiply\t*\n4) Divide\t/" << endl;
	cout << "Enter the Choosen Operator: ";
	cin >> op;
	if ((op != sum) && (op != subt) && (op != mul) && (op != div)) // only 4 opeartors are allowed.
		cout << "Invalid Choice!" << endl;
	else
	{
		cout << "\nWhat is the maximum value for the input values of the exercise?\nAns :"; //TAking maximum valur from user.
		cin >> maximumvalue;

		cout << "\nAre negative values allowed in the exercise? \nAns (Y or N): ";
		cin >> ans;

		if ((ans != ansy) && (ans != ansn))   //only Y and N are allowed.
			cout << "Invalid Choice!" << endl;
		else
		{
			if (ans == ansy)          // if Negative value are allowed.
			{
				rand1 = rand() % 21 - 10;    // -max to max
				rand2 = rand() % 21 - 10;

				if (op == '+')
				{
					cout << "Exercise is :" << "(" << rand1 << ")" << " + " << "(" << rand2 << ")" << endl;
					ex = rand1 + rand2;
				}
				if (op == '-')
				{
					cout << "Exercise is :" << "(" << rand1 << ")" << " - " << "(" << rand2 << ")" << endl;
					ex = rand1 - rand2;
				}

				if (op == '*')
				{
					cout << "Exercise is :" << rand1 << " * " << rand2 << endl;
					ex = rand1 * rand2;
				}

				if (op == '/')
				{
					cout << "Exercise is :" << rand1 << " / " << rand2 << endl;
					 ex = rand1 / rand2;
				}

				cout << "Enter Your Calculated Answer :";
				cin >> exans;
				if (exans == ex)
					cout << "\nCongratulations! Your answer is correct." << endl;
				else
					cout << "\nYour answer is Wrong." << endl;
		
			}
			else {
				if (ans == ansn) {        //if positive value only.
					rand1 = rand() % 11; // range is 0 to 10
					
					
					if (op == '+')
					{
						rand2 = (rand() % 11);  //range satisfied.
						cout << "Exercise is :" << rand1 << " + " << rand2 << endl;
						ex = rand1 + rand2;
					}
					if (op == '-')  //special case.
					{
						rand2 = rand() % static_cast<int>(rand1);       // random number 2 is less than random number 1.
						cout << "Exercise is :" << rand1 << " - " << rand2 << endl;
						ex = rand1 - rand2;
					}

					if (op == '*')
					{
						rand2 = (rand() % 11);     // range satisfied.
						cout << "Exercise is :" << rand1 << " * " << rand2 << endl;
						ex = rand1 * rand2;
					}

					if (op == '/')
					{
						rand2 = (rand() % 11);     // range satisfied.
						cout << "Exercise is :" << rand1 << " / " << rand2 << endl;
						 ex = rand1 / rand2;
					}

					cout << "Enter Your Calculated Answer :";
					cin >> exans;
					if (exans == ex)
						cout << "\nCongratulations! Your answer is correct." << endl;
					else
						cout << "\nYour answer is Wrong." << endl;

				}

			}

		}
		 
	}
	cout << "\n=======================================\nHave a Nice Day!\n---------------------------------------\n" << endl;


	system("pause");
	return 0;
}