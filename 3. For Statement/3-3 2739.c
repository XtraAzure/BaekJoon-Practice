#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);
	
	// To make sure the give number is in range of 2-9
	if (n > 9 || n < 1)
		return 0;

	for (int i = 1; 10 > i; i++)
		printf("%d * %d = %d\n", n,i, n*i);

	return 0;
}