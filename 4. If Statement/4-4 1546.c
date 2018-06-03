#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	float score[10000];
	float max;
	float sum = 0;

	scanf("%d", &num);
	if (num > 1000)
		return 0;

	for (int i = 0; num > i; i++)
	{
		scanf("%d", &score[i]);
		if (score[i] > 100 || score < 0)
			return 0;
		if (i == 0)
			max = score[i];
		if (max < score[i])
			max = score[i];
	}

	for (int i = 0; num > i; i++)
	{
		score[i] = score[i] / max * 100;
	}

	for (int i = 0; num > i; i++)
	{
		sum += score[i];
	}

	printf("%0.2lf", sum/num);

	return 0;
}