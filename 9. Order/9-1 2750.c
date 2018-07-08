#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[1000];
	int num;
	int i, n;
	int min, temp;

	scanf("%d", &num);
	
	for (i = 0; num > i; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; num > i; i++) // Compare element's size in order (0 to N)
	{
		for (n = i; num > n; n++) // Compare elemnt's size from (1 to N) with Array[i]
		{
			if (arr[i] > arr[n]) // Find smaller value than Array[i]
			{
				min = arr[n];

				// Swap Array[i] value from Array[n] to sort array to become increment
				temp = arr[i];
				arr[i] = min;
				arr[n] = temp;
			}
		}
	}

	for (i = 0; num > i; i++)
		printf("%d\n", arr[i]);

	return 0;
}