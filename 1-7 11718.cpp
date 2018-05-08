#include <stdio.h>

int main()
{
	int ch;

	// Until it reaches end of file (eof) input string and print it right away
	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}

	return 0;
}
