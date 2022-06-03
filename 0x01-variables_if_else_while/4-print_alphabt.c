#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - The code begins
 *
 * It always return 0 if the code is correct
 */

int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 101 || alpha == 113)
		{
			continue;
		}

		putchar(alpha);
	}
	printf("\n");
	return (0);
}
