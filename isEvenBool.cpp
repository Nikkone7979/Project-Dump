#include <iostream>
#include <string>
using namespace std;


bool isEven(int a) {
	if ((a % 2) == 0)
		return true;
	else
		return false;
	
}

int main() {
	int int1{ 0 };
	int int2{ 0 };
	int int3{ 0 };

	cout << "Which three numbers would you like to input?" << endl;
	cin >> int1;
	cin >> int2;
	cin >> int3;
	if (isEven(int1)) {
		cout << "Your first number is even." << endl;
	}
	else {
		cout << "Your first number is odd." << endl;
	}
	if (isEven(int2)) {
		cout << "Your second number is even." << endl;
	}
	else {
		cout << "Your second number is odd." << endl;
	}
	if (isEven(int3)){
		cout << "Your third number is even." << endl;
	}
	else {
		cout << "Your third number is odd." << endl;
	}
	system("pause");
}