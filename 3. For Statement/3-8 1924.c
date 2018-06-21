#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int inputM, inputD; // input Month and input day
	int dec = 0;
	int daydec = 0;
	int i;
	scanf("%d %d", &inputM, &inputD);

	for (i = 0; inputM > i; i++)
	{
		dec += month[i];
	}
	dec -= month[inputM-1];
	dec += inputD;

	daydec = dec % 7;
	
	switch (daydec)
	{
	case 0:
		printf("SUN\n");
		break;
	case 1:
		printf("MON\n");
		break;
	case 2:
		printf("TUE\n");
		break;
	case 3:
		printf("WED\n");
		break;
	case 4:
		printf("THU\n");
		break;
	case 5:
		printf("FRI\n");
		break;
	case 6:
		printf("SAT\n");
		break;
	default:
		printf("Something went wrong here...\n");
	}

	return 0;
}