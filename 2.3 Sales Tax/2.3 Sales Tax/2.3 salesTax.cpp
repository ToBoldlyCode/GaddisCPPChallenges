#include <iostream>
using namespace std;

int main()
{
	int price = 52;
	double stateTax = .04,
		countyTax = .02;

	cout << "The price is $" << price << endl;
	cout << "The state tax is $" << stateTax * price << endl;
	cout << "The county tax is $" << countyTax * price << endl;
	cout << "The total tax is $" << (stateTax + countyTax) * price << endl;

	return 0;
}