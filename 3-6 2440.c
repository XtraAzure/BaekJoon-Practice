#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i,j;

	scanf("%d", &n);

	// If n is out of range, execute the program
	if (n > 100 || n < 1)
		return 0;

	for (i = n; 0 < i; i--)
	{
		for (j = 0; i > j; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}