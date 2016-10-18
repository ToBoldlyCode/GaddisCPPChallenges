#include <iostream>
using namespace std;

int main()
{
	const int EAST_COAST_SHARE_OF_SALES = .62;
	int totalSales;

	cout << "Please enter the total revenue for the year: " << endl;
	cin >> totalSales;
	
	cout << "The East Coast sales division generated "
		<< totalSales * EAST_COAST_SHARE_OF_SALES << " in sales." << endl;

	return 0;
}