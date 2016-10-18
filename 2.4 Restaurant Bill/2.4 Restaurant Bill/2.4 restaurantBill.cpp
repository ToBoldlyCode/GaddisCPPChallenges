#include <iostream>
using namespace std;

int main()
{
	double price = 44.50,
		tax = .0675,
		tip = .15;

	cout << "The cost of the meal is $" << price << endl;
	cout << "The tax on the meal is $" << tax * price << endl;
	cout << "The tip after tax is $" << (price * (1 + tax)) * (tip) << endl;
	cout << "The total cost of the meal is $" << (price * (1 + tax)) * (1 + tip) << endl;

	return 0;
}