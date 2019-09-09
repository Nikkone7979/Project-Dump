#include <iostream>
#include <string>
using namespace std;


void isEven(int x, int y, int z)
{
	if ((x % 2) == 0)
		cout << "Your first integer is even." << endl;
	
	if ((x % 2) != 0)
		cout << "Your first integer is odd." << endl;
	
	if ((y % 2) == 0)
		cout << "Your second integer is even." << endl;
	
	if ((y % 2) != 0)
		cout << "Your second integer is odd." << endl;
	
	if ((z % 2) == 0)
		cout << "Your third integer is even." << endl;
	
	if ((z % 2) != 0)
		cout << "Your third integer is odd." << endl;
}


int main() {
	int int1{ 0 };
	int int2{ 0 };
	int int3{ 0 };
	cout << "Enter the three integers you would like to check: " << endl;
	cin >> int1;
	cin >> int2;
	cin >> int3;
	isEven(int1, int2, int3);

	system("pause");
}