#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1;
	int sum = 0;
	int i;
	int oneDigit[100];
	scanf("%d", &num1);

	if (num1 > 100 || num1 < 1)
		return 0;

	for (i = 0; num1 > i; i++)
	{
		scanf("%1d", &oneDigit[i]);
	}

	for (i = 0; num1 > i; i++)
		sum += oneDigit[i];

	printf("%d\n", sum);

	return 0;
}