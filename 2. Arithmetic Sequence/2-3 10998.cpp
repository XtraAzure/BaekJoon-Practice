#include <iostream>

using namespace std;

int main()
{
	int a, b;
	int result;

	cin >> a >> b;
	if (a < 0 || b > 10)
		return 0;
	else
	{
		result = a * b;
		cout << result << endl;
	}

	return 0;
}