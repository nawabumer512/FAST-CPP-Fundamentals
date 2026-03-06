#include<iostream>
using namespace std;

int main()
{
	char chess[8][8];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			chess[i][j] = '*';
		}

	int row = 0, col = 0;
	bool game_over = false, move_poss = true;

	while (!game_over) {
		cout << "Enter row number (1-8) and column number (1-8) : ";
		cin >> row >> col;


		if (chess[row][col] == 'Q') {
			cout << "Already In use !" << endl;
			cout << "Again ";
		}
		else {

			//Checking col
				for (int i = 0; i < 8; i++) {

					if (chess[row][i] == 'Q') {
						cout << "Boom! You Are Attacked." << endl;
						move_poss = false;
						break;
					}
				
					if (chess[i][col] == 'Q') {
						cout << "Boom! You Are Attacked." << endl;
						move_poss = false;
						break;
					}
				
					for (int j = 0; j < 8; j++)
					{

						if((i - row) == (j - col))
							//Time End .

					}
							
							
							
								
				}



		}

	}




	system("pause");
	return 0;
}
