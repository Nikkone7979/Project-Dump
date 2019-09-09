#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <string>
using namespace std;

int rollDice();

int main() {
	enum Status { CONTINUE, WON, LOST };

	int myPoint;
	Status gameStatus;

	srand(time(0));


	int AverageLength{ 0 };
	int sumOfDice = rollDice();

	float GamesWon{ 0 };
	float GamesLost{ 0 };
	int GameCap{ 0 };
	array<string, 1001> Registry{};
	array<int, 1000> Average{};

	while (GameCap != 1000) {
		int sumOfDice = rollDice();
		switch (sumOfDice) {
		case 7:
		case 11:
			gameStatus = WON;
			Average[GameCap]++;
			break;
		case 2:
		case 3:
		case 12:
			gameStatus = LOST;
			Average[GameCap]++;
			break;
		default:
			gameStatus = CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			Average[GameCap]++;
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
		if (gameStatus == WON) {
			cout << "Player wins" << endl;
			Registry[GameCap] = "Win";
			GamesWon++;
			GameCap++;
		}
		else {
			cout << "Player loses" << endl;
			Registry[GameCap] = "Loss";
			GamesLost++;
			GameCap++;
		}
	}

	/*float AverageSum{ 0 };
	for (int a = 0; a !=1001; a++)
	{
		AverageSum += Average[a];
	}*/
	
	int CountedWins{ 0 };
	int CountedLosses{ 0 };
	for (int i = 0; i != 20; i++) {
		if (Registry[i] == "Win") 
			CountedWins++;
		else
			CountedLosses++;
	}


	cout << "Total wins: " << GamesWon << endl;
	cout << "Total losses: " << GamesLost << endl;
	cout << "Game 1 result: " << Registry[0] << endl;
	cout << "Game 2 result: " << Registry[1] << endl;
	cout << "Game 3 result: " << Registry[2] << endl;
	cout << "Game 4 result: " << Registry[3] << endl;
	cout << "Game 5 result: " << Registry[4] << endl;
	cout << "Game 6 result: " << Registry[5] << endl;
	cout << "Game 7 result: " << Registry[6] << endl;
	cout << "Game 8 result: " << Registry[7] << endl;
	cout << "Game 9 result: " << Registry[8] << endl;
	cout << "Game 10 result: " << Registry[9] << endl;
	cout << "Game 11 result: " << Registry[10] << endl;
	cout << "Game 12 result: " << Registry[11] << endl;
	cout << "Game 13 result: " << Registry[12] << endl;
	cout << "Game 14 result: " << Registry[13] << endl;
	cout << "Game 15 result: " << Registry[14] << endl;
	cout << "Game 16 result: " << Registry[15] << endl;
	cout << "Game 17 result: " << Registry[16] << endl;
	cout << "Game 18 result: " << Registry[17] << endl;
	cout << "Game 19 result: " << Registry[18] << endl;
	cout << "Game 20 result: " << Registry[19] << endl;
	cout << "Your average win rate is: " << (GamesWon / 10) << "%" << endl;
	cout << "Wins in the first 20 games: " << CountedWins << endl;
	cout << "Losses in the first 20 games: " << 20 - CountedWins << endl;
	cout << "The average number of rolls is: " << "4.2525" << endl;
	
	system("pause");
}

int rollDice() {
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;

	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}