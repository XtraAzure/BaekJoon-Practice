#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char OX[80];
	int numTest;
	int i, j;
	int sum = 0;
	int consecutive = 0;
	scanf("%d", &numTest);

	for (i = 0; numTest > i; i++)
	{
		sum = 0;
		consecutive = 1;
		scanf("%s", &OX);
		for (j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'O')
			{
				sum += consecutive;
				consecutive++;			
			}
			if (OX[j] == 'X')
				consecutive = 1;
		}
		printf("%d\n", sum);
	}

	return 0;
}