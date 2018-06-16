#include <iostream>

using namespace std;

int main()
{
	int num[8]; 
	int ascNum[8];
	int dscNum[8];
	int min, max, temp;
	int count = 0;

	for (int i = 0; i < 8; i++)
		cin >> num[i];
	
	for (int i = 0; i < 8; i++)
	{
		ascNum[i] = num[i];
		dscNum[i] = num[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i; 8 > j; j++)
		{
			if (ascNum[i] > ascNum[j])
			{
				min = ascNum[j];

				temp = ascNum[i];
				ascNum[i] = min;
				ascNum[j] = temp;
			}
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i; 8 > j; j++)
		{
			if (dscNum[i] < dscNum[j])
			{
				max = dscNum[j];

				temp = dscNum[i];
				dscNum[i] = max;
				dscNum[j] = temp;
			}
		}
	}

	for (int i = 0; 8 > i; i++)
	{
		if (ascNum[i] == num[i])
		{
			count++;
		}
	}
	if (count == 8)
	{
		cout << "ascending" << "\n";
		return 0;
	}
	else
		count = 0;
	
	for (int i = 0; 8 > i; i++)
	{
		if (dscNum[i] == num[i])
		{
			count++;
		}
	}
	if (count == 8)
	{
		cout << "descending" << "\n";
		return 0;
	}

	cout << "mixed" << "\n";

	return 0;
}