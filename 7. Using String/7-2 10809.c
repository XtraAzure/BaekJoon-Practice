#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char input[100];
	char alpha[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int order[26] = { -1,-1,-1,-1,-1, -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
	int cnt = 0;

	scanf("%s", &input);


	for (int i = 0; strlen(input) > i; ++i)
	{
		for (int j = 0; 26 > j; ++j)
		{
			if (input[i] == alpha[j])
			{
				if (order[j] == -1)
				{
					order[j] = i;
				}
				
			}
		}
	}

	for (int i = 0; 26 > i; i++)
	{
		printf("%d ",order[i]);
	}
	printf("\n");
	
	return 0;
}