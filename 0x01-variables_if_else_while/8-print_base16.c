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
	char number;
	char alphabet;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
