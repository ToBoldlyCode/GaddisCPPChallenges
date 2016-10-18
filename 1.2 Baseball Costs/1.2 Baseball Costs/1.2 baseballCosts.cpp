#include <iostream>
using namespace std;

int main()
{
	int baseballs;
	double pricePerBall;

	cout << "Please enter the number of baseballs bought: " << endl;
	cin >> baseballs;
	cout << "Please enter the price per ball: " << endl;
	cin >> pricePerBall;

	cout << "Your total purchase price is: " << endl;
	cout << "$" << baseballs * pricePerBall << endl;

	return 0;
}