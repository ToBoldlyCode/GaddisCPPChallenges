#include <iostream>
using namespace std;

int main()
{
	int shares = 600;
	double buyPrice = 21.77,
		sellPrice = 16.44;

	cout << shares << " bought at a total price of $" << shares * buyPrice << endl;
	cout << shares << " sold at a total price of $" << shares * sellPrice << endl;
	cout << "Net loss/profit: $" << (shares*sellPrice) - (shares*buyPrice) << endl;
	return 0;
}