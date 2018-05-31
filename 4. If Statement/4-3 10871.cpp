#include <iostream>

using namespace std;

int main()
{
	int n, x;
	int A;
	cin >> n >> x;

	if (n < 1)
		return 0;
	if (x > 10000)
		return 0;

	for (int i = 0; i < n; i++)
	{
		cin >> A;
		if (x > A)
			cout << A << " ";
	 }

	cout << endl;

	return 0;
}