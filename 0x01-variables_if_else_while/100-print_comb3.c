#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    /* your code goes there */
   int digit1;
   int digit2;

	for (digit1 = '0';digit1 < '9';digit1++)
	{
		for (digit2 = '0'; digit2 <= '9'; digit2++)
		{
			if (digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 == '8' && digit2 == '9')
				{
					continue;
				}
                putchar(',');
                putchar(' ');

			}
		}
    }
    putchar('\n');
    return (0);
    }

