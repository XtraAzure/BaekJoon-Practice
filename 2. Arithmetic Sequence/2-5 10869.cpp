#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	// If range of two numbers do not match to following range, return 0 (1<= a, b <= 10000)
	if (a < 1 || b > 10000)
		return 0;


	// Arithmetic operation
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	return 0;
}