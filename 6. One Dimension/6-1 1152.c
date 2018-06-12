#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char input[1000000];
	int count = 0;
	char *token;
	char *space = " ";
	gets(input);

	token = strtok(input, space);
	while (token != NULL)
	{
		count++;
		token = strtok(NULL, space);
	}

	printf("%d\n", count);

	return 0;
}