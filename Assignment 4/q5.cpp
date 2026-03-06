#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;
	int main()
	{
		srand(time(0));

		char weather[3][30];
		int Rdays[3] = { 0 }, Sdays[3] = { 0 }, Cdays[3] = { 0 };
		int total_R = 0, total_S = 0, total_C = 0;


		for (int months = 0; months < 3; months++)
			for (int days = 0; days < 30; days++)
			{
				double random = (double)rand() / RAND_MAX; //it will genrate value between 0 and 1 (Random max for double is 32767)
			
				if (random < 0.333) {
					weather[months][days] = 'R'; //for rainy days
					Rdays[months]++;
				}
				else
					if (random < 0.666) {
						weather[months][days] = 'C'; //for cloudy days
						Cdays[months]++;
					}
					else
						if (random <= 1.00) {
							weather[months][days] = 'S'; //for sunny days
							Sdays[months]++;
						}
			}

		// totals
		for (int i = 0; i < 3; i++) {
			total_R += Rdays[i];
			total_S += Sdays[i];
			total_C += Cdays[i];
		}

		// most rainy days
		int max_rain = 0, most_rm = 0;
	
		for (int i = 1; i < 3; i++) {
			if (Rdays[i] > max_rain) {
				max_rain = Rdays[i];
				most_rm = i;
			}
		}


		string month_names[3] = { "June", "July", "August" };

		// report
		cout << "Report for each month: \n";
		cout << "================================\n";

		for (int i = 0; i < 3; i++)
		{
			cout << month_names[i] << ":\n";
			cout << "Rainy days: " << Rdays[i] << endl;
			cout << "Sunny days: " << Sdays[i] << endl;
			cout << "Cloudy days: " << Cdays[i] << endl;
			cout << "===================================\n";
		}

		// Three-month totals
		cout << "3 Month Total:\n";
		cout << "Total Rainy days: " << total_R << endl;
		cout << "Total Sunny days: " << total_S << endl;
		cout << "Total Cloudy days: " << total_C << endl;
		cout << "====================================\n";

		// Rainiest month
		cout << "MONTH WITH MOST RAINY DAYS:\n";
		cout << month_names[most_rm] << " with " << max_rain << " rainy days\n";
		cout << "================================\n";

		system("pause");
		return 0;
	}