#include <iostream>
using namespace std;

int main()
{
	int candyBars;
	double profitPerBar;

	cout << "Please enter the number of candy bars sold: " << endl;
	cin >> candyBars;
	cout << "Please enter the earnings per bar: " << endl;
	cin >> profitPerBar;

	cout << "Your total earnings are: " << endl;
	cout << "$" << candyBars * profitPerBar << endl;

	return 0;
}