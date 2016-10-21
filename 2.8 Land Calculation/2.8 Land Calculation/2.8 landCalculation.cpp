#include <iostream>
using namespace std;

int main()
{
	const int SQUARE_FEET_PER_ACRE = 43560;
	const double SQUARE_FEET_PER_SQUARE_METER = 10.7639;

	double acreage = .25;
	double sqFeet = SQUARE_FEET_PER_ACRE * acreage;
	double sqMeter = sqFeet / SQUARE_FEET_PER_SQUARE_METER;

	cout << sqMeter << endl;
	system("pause");

	return 0;
}