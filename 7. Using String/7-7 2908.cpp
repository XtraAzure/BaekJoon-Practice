#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a, b;
	string c, d;
	int temp;

	cin >> a >> b;

	for (int i = 0; 3 > i; i++)
	{
		if (a[i] == '0' || b[i] == '0')
		{
			cout << "Should not include 0\n";
			return -1;
		}
	}
	
	temp = a[0];
	a[0] = a[2];
	a[2] = temp;
	
	temp = b[0];
	b[0] = b[2];
	b[2] = temp;

	//cout << a << " " << b << "\n";

	if (a > b)
		cout << a;
	else
		cout << b;
	cout << "\n";

	return 0;
}