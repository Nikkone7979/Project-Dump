//Craps Program
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDice();

int main()
{
	enum Status { CONTINUE, WON, LOST };
	int myPoint;
	Status gameStatus;
	srand(time(0));
	int sumOfDice = rollDice();
	/*int GamesWon{ 0 };
	int GamesLost{ 0 };
	int GameCap{ 0 };*/
//	while (GameCap < 1000) {
		switch (sumOfDice) {
		case 7:
		case 11:
			gameStatus = WON;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
		}
		while (gameStatus == CONTINUE) {
			sumOfDice = rollDice();
			if (sumOfDice == myPoint) 
				gameStatus = WON;
			else
				if (sumOfDice == 7)
					gameStatus = LOST;
		}
		if (gameStatus = WON) {
			cout << "Player wins" << endl;
			//GamesWon++;
			//GameCap++;
		}
		else{
			cout << "Player Loses" << endl;
			//GamesLost++;
			//GameCap++;
		}
//	}


	//cout << "Number of games won: " << GamesWon << endl;
	//cout << "Number of games lost: " << GamesLost << endl;
	system("pause");
}

int rollDice() {
		int die1 = 1 + rand() % 6;
		int die2 = 1 + rand() % 6;

		int sum = die1 + die2;

		cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
		return sum;
}



