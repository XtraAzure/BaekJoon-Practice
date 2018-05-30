#include <iostream>
#include <string>

using namespace std;

int main()
{
	int length;
	int i=0;
	int limit = 10;
	int actualLength;
	int tenbyTen = 10;

	string input;

	cin >> input;
	
	// Check if string is out of range
	if (input.length() > 100 || input.length() < 1)
		return 0;

	length = input.length()/10 + 1;
	actualLength = input.length();

	for (int k = 0; length > k; k++)
	{
		if (actualLength >= 10)
		{
			for (i; tenbyTen > i; i++)
			{
				cout << input[i];
			}
			actualLength = actualLength - 10;
			tenbyTen += 10;
			cout << endl;
		}
		else
		{
			for (i; input.length() > i; i++)
			{
				cout << input[i];
			}
			actualLength = 0;
			cout << endl;
		}
	}
	
	return 0;
}