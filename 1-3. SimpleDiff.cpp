#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int result;
	cin >> a >> b;
	
	// Check if the input numbers are in range
	if (a < 0 || b > 10)
		return 0;
	result = a - b;
	cout << result << endl;

	return 0;
}
