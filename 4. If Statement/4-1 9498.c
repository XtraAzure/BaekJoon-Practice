#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score;

	scanf("%d", &score);

	if (score > 100 || score < 0)
		return 0;

	if (score >= 90 && score <= 100)
	{
		printf("A\n");
	}
	else if (score >= 80 && score < 90)
	{
		printf("B\n");
	}
	else if (score >= 70 && score < 80)
	{
		printf("C\n");
	}
	else if (score >= 60 && score < 70)
	{
		printf("D\n");
	}
	else
	{
		printf("F\n");
	}

	return 0;
}