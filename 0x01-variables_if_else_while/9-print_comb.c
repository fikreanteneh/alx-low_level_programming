#include <stdio.h>

/**
 * main - The code begins
 *
 * It always return 0 if the code is correct
 */

int main(void)
{
    	int digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
		if (digits != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
