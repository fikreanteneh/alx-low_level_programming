#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - The code begins
 *
 * Return: It always return 0 if the code is correct
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	printf("\n");

	return (0);
}

