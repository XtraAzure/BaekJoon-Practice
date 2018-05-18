#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i, k;

	scanf("%d", &n);

	// If the n is out of ranged, execute the program
	if (n > 100 || n < 1)
		return 0;

	for (i = 1; n >= i; i++)
	{
		for (k = 0; i > k; k++)
			printf("*");
		printf("\n");
	}

	return 0;
}