#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double EAST_COAST_SHARE_OF_SALES = .62;
	double totalSales;

	cout << "Please enter the total revenue for the year: " << endl;
	cin >> totalSales;

	cout << fixed << setprecision(2) << "The East Coast sales division generated $"
		<<  totalSales * EAST_COAST_SHARE_OF_SALES 
		<< " in sales." << endl;

	return 0;
}