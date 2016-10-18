#include <iostream>
using namespace std;

int main()
{
	int tankSize = 20;
	double townMPG = 21.5,
		highwayMPG = 26.8;

	cout << "The car can drive up to " << tankSize * townMPG
		<< " miles in town and " << tankSize * highwayMPG << " miles on the highway!" << endl;

	return 0;
}