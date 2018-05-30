#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a;

	if (a < 0)
		return 0;

	cin >> b;
	if (b > 10)
		return 0;

	cout << a + b << endl;

	return 0;
}