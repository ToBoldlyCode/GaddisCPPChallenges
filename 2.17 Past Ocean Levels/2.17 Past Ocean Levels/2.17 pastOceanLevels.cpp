#include <iostream>
using namespace std;

int main()
{

	const double MILIMETERS_PER_YEAR = 1.8;

	int years = 100;

	double totalCentimeters = (years * MILIMETERS_PER_YEAR) / 10;
	double totalInches = totalCentimeters * .3937;

	cout << totalCentimeters << endl;
	cout << totalInches << endl;

	return 0;
}