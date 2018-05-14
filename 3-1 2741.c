#include <stdio.h>

int main()
{
	int n;
	int i;
	scanf("%d", &n);

	if (n <= 0 || n > 100000)
	{
		return 0;
	}

	for (i = 1; n >= i; i++)
		printf("%d\n", i);

	return 0;
}