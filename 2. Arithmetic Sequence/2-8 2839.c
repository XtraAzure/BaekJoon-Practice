#include <stdio.h>

int main()
{
	int input;
	int threeKG = 0;

	scanf("%d", &input);

	while (1)
	{
		if (input % 5 == 0)
		{
			printf("%d", input / 5 + threeKG);
			break;
		}
		else if (input <= 0)
		{
			printf("-1\n");
			break;
		}
		input -= 3;
		threeKG++;
	}
	return 0;
}