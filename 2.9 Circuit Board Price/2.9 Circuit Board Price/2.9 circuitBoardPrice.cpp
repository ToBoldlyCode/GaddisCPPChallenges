#include <iostream>
using namespace std;

int main()
{
	const double PERCENT_PROFIT = 1.40;
	double price = 12.67;

	cout << "The selling price of an object which costs $"
		<< price << " to produce is $" << price * PERCENT_PROFIT << endl;

	return 0;
}