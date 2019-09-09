#include <iostream>
#include <string>
using namespace std;



void space(int n) {
	int i = 0;
	int arr[10];
	while (n > 0)
	{
		arr[i] = n % 10;
		n = n / 10;
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

}

int main() {
	int a{ 0 };
	int b{ 0 };
	int quotient{ 0 };
	int remainder{ 0 };
	cout << "Enter two integers: " << endl;
	cin >> a;
	cin >> b;
	quotient = (a / b);
	remainder = (a % b);
	cout << "The quotient of these two integers is: " << quotient << endl;
	cout << "The remainder of these two integers after division is: " << remainder << endl;
	space(rand()*a);
	cout << endl;
	system("pause");
}	