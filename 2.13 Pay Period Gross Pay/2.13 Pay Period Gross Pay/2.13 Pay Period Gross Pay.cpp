#include <iostream>
using namespace std;

int main()
{
	double grossPay = 32500.00;

	cout << "Bi-monthly pay: \n"
		<< grossPay / 24
		<< "\nBi-weekly pay: \n"
		<< grossPay / 26;

	return 0;
}