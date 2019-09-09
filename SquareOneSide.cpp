#include <iostream>
#include <string>
using namespace std;

void Ast(int x) {
	while (x > 0) {
		cout << "****" << endl;
		x = x - 1;
	}
	
}

int main() {
	int int1{ 0 };
	cout << "Enter the size of your square: ";
	cin >> int1;
	Ast(int1);
	system("pause");
}