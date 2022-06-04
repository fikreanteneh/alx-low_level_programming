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
	/* your code goes there */
	int digits;
	
	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	
	return (0);
}	
