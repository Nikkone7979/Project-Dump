//5.12 - Write a program that uses a for statement tocalculate and print the product of the odd integers from 1 to 15
#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	int index{ 1 };
	for (i = 1; i <= 15; i = i + 2) {
		index = index * i;
		cout << "Odd integeder: " << i << " " << endl;
		cout << "Product of previous odd integers: " << index << endl;
	};
	system("pause");
};