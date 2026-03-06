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

	int num;
	//Starting Introduction.
	cout << "Guessing Games!\n===================================" << endl;
	cout << "\n1) Play Higher or Lower\n2) Play Paper-scissors-rock\n3) Guess the numbers\n4) Quit\n\nEnter Your Choice (1-4): ";
	cin >> num;
	if (num < 1 || num > 4)               // Number should be in the range.
		cout << "Input error!" << endl;
	else
	{//1
		if (num == 1)
		{//Game 10

			int rand1, rand2;
			char ch, ch1 = 'H', ch2 = 'L';

			cout << "Welcome to the Higher or Lower Game.\n===================================" << endl;
			rand1 = rand() % 20 + 1;      //number should be between 1 and 20.
			rand2 = rand() % 20 + 1;

			cout << "\nRandom 1st Number is: " << rand1 << endl;
			cout << "Choose Higher and Lower: ";
			cin >> ch;

			if ((ch != ch1) && (ch != ch2))                           // H and L are Valid inputs.
				cout << "Invalid Input!\nOnly H and L are accepted." << endl;
			else 
			{//Game 11
				   if (ch == ch1)
				     {//Game 12
					    if (rand2 > rand1)
						    cout << "Congratulations! You Won." << endl;
					    else
						    cout << "Oh! Computer Won." << endl;
				     }//Game 12

				if (ch == ch2)
				{//Game 13
					if (rand2 < rand1)
						cout << "Congratulations! You Won." << endl;
					else
						cout << "Oh! Computer Won." << endl;
				}//Game 13
			} //Game 11
		}//Game 10


		if (num == 2)
		{ //g20
			int P = 1, S = 2, R = 3, rand1;

			cout << "Welcome to the Paper, Scissors and Rock Game.\n===================================" << endl;
			cout << "\n1) 1 for Paper\n2) 2 for Scissors\n3) 3 for Rock\nEnter Your Choice : ";
			cin >> num;

			// Checking the input is valid or not.
			if ((num != P) && (num != S) && (num != R))
				cout << "Invalid Input!\nOnly 1, 2 and 3 are accepted." << endl;
			else
			{ //g21
				rand1 = rand() % 4 + 1;   //random number between 1 and 3

				if ((rand1 == P) && (num == S))  //Paper vs Scissors
					cout << "You Win!" << endl;

				if ((rand1 == S) && (num == P))
					cout << "Computer Win!" << endl;

				if ((rand1 == S) && (num == R))  //Scissors Vs Rock
					cout << "You Win!" << endl;

				if ((rand1 == R) && (num == S))
					cout << "Computer Win!" << endl;

				if ((rand1 == R) && (num == P))  //Rock Vs Paper
					cout << "You Win!" << endl;

				if ((rand1 == P) && (num == R))
					cout << "Computer Win!" << endl;

				if (rand1 == num)                 //Draw Match
					cout << "Match Draw!" << endl;
			}//g21
		}//g20


		if (num == 3)
		{//g30
			cout << "Welcome to the Guess the Number game.\n===================================" << endl;

			int rand1=0, rand2=0, rand3=0, num1, num2, num3;

			cout << "You Have to Choose Three Numbers." << endl;
			cout << "\n1) Enter 1st Number :";
			cin >> num1;

			cout << "\n2) Enter 2nd Number :";
			cin >> num2;

			cout << "\n3) Enter 3rd Number :";
			cin >> num3;

			cout << "\nNow Computer will guess the three Numbers.\nResults:\n" << endl;

			//Three Random Numbers b/w 0 and 9.
			rand1 = rand() % 10;
			rand2 = rand() % 10;
			rand3 = rand() % 10;
		
			if ((num1 == rand1) && (num2 == rand2) && (num3 == rand3)) //three matching in Exact Order
				cout << "d) Three Matching in exact Order." << endl;
			else
				if ((num1 == rand1) || (num1 == rand2) || (num1 == rand3) && (num2 == rand1) || (num2 == rand2) || (num2 == rand3) && (num3 == rand1) || (num3 == rand2) || (num3 == rand3))
					cout << "c) Three Matching but not in Order." << endl; //not in exact order.
				else
				{
					int count = 0;
					if ((num1 == rand1) || (num1 == rand2) || (num1 == rand3))
						count += 1;
					if ((num2 == rand1) || (num2 == rand2) || (num2 == rand3))
						count += 1;
					if ((num3 == rand1) || (num3 == rand2) || (num3 == rand3))
						count += 1;


					if (count == 2)                                    //two matching.
						cout << "b) Two Matching." << endl;

					if (count == 1)                                    //one match.
						cout << "a) Any One matching." << endl;

					if (count == 0)                                     //no match.
						cout << "e) No Matching At All!" << endl;
				}
		}//g30

		if (num == 4)
			cout << "You Quit the Game." << endl;

	}//1 1 & 4 condition

	cout << "\n===================================\nGood to see You!\n________________" << endl;





	system("pause");
	return 0;
}