#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int height;
	int i, k, j;

	scanf("%d", &height);

	// If height is out of ranged, execute the program
	if (height > 100 || height < 1)
		return 0;

	// Add space first, then add astrisk; number of astrisk depends on height's ascending order
	for (i = height; i >= 1; i--)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		for (k = height; k >= i; k--)
			printf("*");
		printf("\n");
	}

	return 0;
}