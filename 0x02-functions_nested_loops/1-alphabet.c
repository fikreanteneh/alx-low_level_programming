#include <stdio.h>

/**
 * main - The code begins
 * 
 * Return: returns noting
 */

void print_alphabet(void);
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		putchar(alpha);
	}
	putchar("\n");

}

