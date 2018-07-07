#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Croatia;
	int cnt = 0;

	cin >> Croatia;	

	for (int i = 0; Croatia.length() > i; i++)
	{
		if (Croatia[i] == 'c')
		{
			if (Croatia[i + 1] == '=' || Croatia[i + 1] == '-')
			{
				i++;
			}
		}
		else if (Croatia[i] == 'd')
		{
			if (Croatia[i + 1] == 'z')
			{
				if (Croatia[i + 2] == '=')
				{
					i+=2;
				}
			}
			if (Croatia[i + 1] == '-')
			{
				i++;
			}
		}
		else if (Croatia[i] == 'l')
		{
			if (Croatia[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (Croatia[i] == 'n')
		{
			if (Croatia[i + 1] == 'j')
			{
				i++;
			}
		}
		else if (Croatia[i] == 's')
		{
			if (Croatia[i+1] == '=')
			{
				i++;
			}
		}
		else if (Croatia[i] == 'z')
		{
			if (Croatia[i + 1] == '=')
			{
				i++;
			}
		}
		cnt++;
	}
	cout << cnt<<"\n";

	return 0;
}