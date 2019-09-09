#include <iostream>
#include <string>
using namespace std;

class invoice {
private:
	string number;
	string description;
	int quantity;
	int price;
public:
	invoice(string n, string d, int q, int p) {

		number = n;
		description = d;
		if (p > 0) {
			price = p;
		}
		if (q > 0) {
			quantity = q;
		}

	};


	string GetNumber() const
	{
		return number;
	};
	string GetDescription() const
	{
		return description;
	};
	int GetQuantity() const
	{
		return quantity;
	};
	int GetPrice() const
	{
		return price;
	};


};

int main() {
	invoice Item("101", "Hammer", 8, 15);
	cout << "Part Number: " << Item.GetNumber() << endl;
	cout << "Item Description: " << Item.GetDescription() << endl;
	cout << "Item Quantity: " << Item.GetQuantity() << endl;
	cout << "Item Price: " << Item.GetPrice() << endl;
	

	system("pause");

	return 0;
};
