#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	int result;
	int array[10] = { 0 };

	cin >> a >> b >> c;
	result = a * b *c;

	while (result != 0)
	{
		array[result % 10] += 1;
		result /= 10;
	}

	for (int i = 0; 10 > i; i++)
	{
		cout << array[i] << endl;
	}

	return 0;
}