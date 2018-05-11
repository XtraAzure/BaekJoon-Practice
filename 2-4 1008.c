#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b;
	double result;

	scanf("%lf %lf", &a, &b);
	if (a < 0 || b > 10)
	{
		return 0;
	}

	result = a / b;

	printf("%0.9lf",result);

	system("PAUSE");
	return 0;
}