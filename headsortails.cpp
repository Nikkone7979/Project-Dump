#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <stdlib.h>
using namespace std;


int random()
{
	int n;
	for (int i = 1; i < 2; i++)
	{
		n = (rand() % 2);
	}
	return n;
}


//Function as an iteration:
/*void toss(int index) {
	int h{ 0 };
	int t{ 0 };
	while (index >= 1) {
		if (random() == 1) {
			cout << "Heads" << endl;
			h++;

		}
		else {
			cout << "Tails" << endl;
			t++;
		}
		index = index - 1;
	}
	cout << "Total heads = " << h << endl;
	cout << "Total tails = " << t << endl;
	}*/
	

//Function using recursion:
int h{ 0 };
int t{ 0 };
void toss2(int x) {
	if (x != 0) {
		if (random() == 1) {
			cout << "Heads" << endl;
			x--;
			h++;
			toss2(x);
		}
		else {
			cout << "Tails" << endl;
			x--;
			t++;
			toss2(x);
		}
	}
	else {
		cout << "Total number of heads: " << h << endl;
		cout << "Total number of tails: " << t << endl;
	}
}

int main(){
	toss2(1000);
	system("pause");
}

