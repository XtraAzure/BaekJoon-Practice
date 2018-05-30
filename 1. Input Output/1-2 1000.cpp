#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int result;
	cin >> a >> b;
	
	// Checking range of a and b integer
	if (a < 0 || b > 10)
		return 0;
	result = a + b;
	cout << result << endl;

	return 0;

}