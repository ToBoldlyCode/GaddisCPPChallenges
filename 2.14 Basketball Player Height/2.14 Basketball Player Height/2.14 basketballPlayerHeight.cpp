#include <iostream>
using namespace std;

int main()
{
	int heightInInches = 73;

	int feet = heightInInches / 12;
	int inches = heightInInches % 12;

	cout << feet << "'" << inches << "\"" << endl;

	return 0;
}