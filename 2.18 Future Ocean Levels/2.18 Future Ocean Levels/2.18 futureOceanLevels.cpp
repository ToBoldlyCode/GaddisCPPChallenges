#include <iostream>
using namespace std;

int main()
{
	const double RISE_IN_MILIMETERS = 3.1;

	int years = 20;

	double totalCentimeters = (years * RISE_IN_MILIMETERS) / 10;
	double totalInches = totalCentimeters * .3973;

	cout << totalCentimeters << endl;
	cout << totalInches << endl;

	system("pause");

	return 0;
}