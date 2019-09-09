#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	double n{ 1 };
	for (i = 1; i <= 20; i++) {
		n = n * i;
		cout << "Factorial of " << i << " is: " << n << " " << endl;
	};
	system("pause");
}