#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int testCase;
	int n, i,j,k;
	char input[21];
	scanf("%d", &testCase);
	for (i = 0; i < testCase; i++)
	{
		scanf("%d %s", &n, input);
		for (j = 0;strlen(input) > j; j++)
			for (k = 0; k < n; k++)
				printf("%c", input[j]);
		printf("\n");
	}

	return 0;
}
