#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b = 0 ; b <= 99; b++)
		{
		    if (b <= a)
                continue;
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

