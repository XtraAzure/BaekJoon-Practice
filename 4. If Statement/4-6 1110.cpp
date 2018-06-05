#include <iostream>

using namespace std;

int main()
{
	int num;
	int count = 0;
	int a, b, c, sum;
	cin >> num;
	sum = num;
	while (sum != num || count == 0)
	{
		a = sum / 10;
		b = sum % 10;
		c = (a + b) % 10;
		a = b;
		b = c;
		sum = a * 10 + b;
		count++;
	}

	cout << count << endl;
	
	return 0;
}