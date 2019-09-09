#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

//TO DO: Fix the million couts and cins to the appropriate text, see if it can be done in a for loop to make the code more concise. Add the average values, total values, etc that the assignment requested.

int main() {
	int const Salesman{ 5 };
	int const Product{ 6 };
	int Sales[5][6] = { {1,2,3,4,5,6},{1,2,3,4,5} };
	int Value{ 0 };
	int TotalSales{ 0 };
	int TotalProduct{ 0 };
	cout << "Enter the number of sales of the first product by the first salesman: " << endl;
	cin >> Sales[0][0];
	cout << "Enter the number of sales of the first product by the second salesman: " << endl;
	cin >> Sales[0][1];
	cout << "Enter the number of sales of the first product by the third salesman: " << endl;
	cin >> Sales[0][2];
	cout << "Enter the number of sales of the first product by the fourth salesman: " << endl;
	cin >> Sales[0][3];
	cout << "Enter the number of sales of the first product by the fifth salesman: " << endl;
	cin >> Sales[0][4];
	cout << "Enter the number of sales of the second product by the first salesman: " << endl;
	cin >> Sales[1][0];
	cout << "Enter the number of sales of the second product by the second salesman: " << endl;
	cin >> Sales[1][1];
	cout << "Enter the number of sales of the second product by the third salesman: " << endl;
	cin >> Sales[1][2];
	cout << "Enter the number of sales of the second product by the fourth salesman: " << endl;
	cin >> Sales[1][3];
	cout << "Enter the number of sales of the second product by the fifth salesman: " << endl;
	cin >> Sales[1][4];
	cout << "Enter the number of sales of the third product by the first salesman: " << endl;
	cin >> Sales[2][0];
	cout << "Enter the number of sales of the third product by the second salesman: " << endl;
	cin >> Sales[2][1];
	cout << "Enter the number of sales of the third product by the third salesman: " << endl;
	cin >> Sales[2][2];
	cout << "Enter the number of sales of the third product by the fourth salesman: " << endl;
	cin >> Sales[2][3];
	cout << "Enter the number of sales of the third product by the fifth salesman: " << endl;
	cin >> Sales[2][4];
	cout << "Enter the number of sales of the third product by the first salesman: " << endl;
	cin >> Sales[3][0];
	cout << "Enter the number of sales of the fourth product by the second salesman: " << endl;
	cin >> Sales[3][1];
	cout << "Enter the number of sales of the fourth product by the third salesman: " << endl;
	cin >> Sales[3][2];
	cout << "Enter the number of sales of the fourth product by the fourth salesman: " << endl;
	cin >> Sales[3][3];
	cout << "Enter the number of sales of the fourth product by the fifth salesman: " << endl;
	cin >> Sales[3][4];
	cout << "Enter the number of sales of the fourth product by the first salesman: " << endl;
	cin >> Sales[4][0];
	cout << "Enter the number of sales of the fifth product by the second salesman: " << endl;
	cin >> Sales[4][1];
	cout << "Enter the number of sales of the fifth product by the third salesman: " << endl;
	cin >> Sales[4][2];
	cout << "Enter the number of sales of the fifth product by the fourth salesman: " << endl;
	cin >> Sales[4][3];
	cout << "Enter the number of sales of the fifth product by the fifth salesman: " << endl;
	cin >> Sales[4][4];
	cout << "Enter the number of sales of the sixth product by the first salesman: " << endl;
	cin >> Sales[5][0];
	cout << "Enter the number of sales of the sixth product by the second salesman: " << endl;
	cin >> Sales[5][1];
	cout << "Enter the number of sales of the sixth product by the third salesman: " << endl;
	cin >> Sales[5][2];
	cout << "Enter the number of sales of the sixth product by the fourth salesman: " << endl;
	cin >> Sales[5][3];
	cout << "Enter the number of sales of the sixth product by the fifth salesman: (LAST) " << endl;
	cin >> Sales[5][4];
	
	int TotalRows[5]{ 0 };
	for (int i{ 0 }; i != 5; i++) {
		TotalRows[0] += Sales[0][i];
	}

	for (int i{ 0 }; i != 5; i++) {
		TotalRows[1] += Sales[1][i];
	}

	for (int i{ 0 }; i != 5; i++) {
		TotalRows[2] += Sales[2][i];
	}

	for (int i{ 0 }; i != 5; i++) {
		TotalRows[3] += Sales[3][i];
	}

	for (int i{ 0 }; i != 5; i++) {
		TotalRows[4] += Sales[4][i];
	}

	for (int i{ 0 }; i != 3; i++) {
		TotalRows[5] += Sales[5][i];
	}

	int TotalCols[4]{ 0 };

	for (int i{ 0 }; i != 4; i++) {
		TotalCols[0] += Sales[0][i];
	}
	for (int i{ 0 }; i != 4; i++) {
		TotalCols[1] += Sales[1][i];
	}
	for (int i{ 0 }; i != 4; i++) {
		TotalCols[2] += Sales[2][i];
	}
	for (int i{ 0 }; i != 4; i++) {
		TotalCols[3] += Sales[3][i];
	}
	for (int i{ 0 }; i != 4; i++) {
		TotalCols[4] += Sales[4][i];
	}
	for (int i{ 0 }; i != 5; i++) {
		TotalCols[5] += Sales[5][i];
	}
	cout << "Salesmen: " << setw(5) << "Product 1: " << setw(5) << "Product 2: " << setw(5) << "Product 3: " << setw(5) << "Product 4: " << setw(5) << "Product 5: " << setw(5) << "Product 6: " << setw(5) << "Total sales: " << endl;
	for (int i{ 0 }; i != 5; i++) {
		cout << "Salesman " << i + 1 << ":" << setw(10) << Sales[0][i] << setw(10) << Sales[1][i] << setw(10) << Sales[2][i] << setw(10) << Sales[3][i] << setw(10) << Sales[4][i] << setw(10) << Sales[5][i] << setw(10) << TotalCols[i] << endl;
	};
	cout << "Total Sales: " << setw(8) << TotalRows[0] << setw(10) << TotalRows[1] << setw(10) << TotalRows[2] << setw(10) << TotalRows[3] << setw(10) << TotalRows[4] << setw(10) << TotalRows[1] << endl;




	system("pause");

}