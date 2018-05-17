#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	int i;

	scanf("%d", &n);

	if (n > 100000)
		return 0;

	for (i = n; 0 < i; i--)
		printf("%d\n", i);

	return 0;
}