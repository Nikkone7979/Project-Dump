//(Compound Interest) Modify the compound interest program of Section 5.4 to repeat its steps for the interest rates 5%, 6%, 7%,8%, 9% and 10%.
//Use a for statement to vary the interest rate.
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
	double amount;
	double principal{ 1000 };
	double rate{ 0.05 };
	cout << fixed << setprecision(2);
	for (double rate = 0.05; rate <= 0.1; rate = rate + 0.01) {
		cout << "\nInterest rate is: " << rate << "%:" << endl;
		for (int year = 1; year <= 10; ++year) {
			amount = principal * pow(1.0 + rate, year);
			cout << "Year Number: " << year << "\n" << "Total amount with interest: " << amount << endl;
		}
	}
	system("pause");
}