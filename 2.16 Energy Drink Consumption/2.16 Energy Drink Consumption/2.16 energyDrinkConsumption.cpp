#include <iostream>
using namespace std;

int main()
{
	int customers = 12467;
	double weeklyBuyer = .14,
		citrusPreference = .64;

	cout << customers * weeklyBuyer
		<< " customers surveyed buy one or more energy drinks per week." << endl
		<< (customers * weeklyBuyer) * citrusPreference
		<< " of those customers prefer citrus flavored energy drinks." << endl;

}