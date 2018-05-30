#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i;
	int sum = 0;
	int div, remainder;

	scanf("%d", &n);
	
	// If n is out of range, execute program
	if (n > 10000 || n < 1)
	{
		return 0;
	}

	sum = 1 + n;
	div = n / 2;
	remainder = n % 2;
	
	if (remainder == 0)
		sum = sum * div;
	else
	{
		sum = sum * div + (sum / 2);
	}

	printf("%d\n", sum);

	return 0;
}