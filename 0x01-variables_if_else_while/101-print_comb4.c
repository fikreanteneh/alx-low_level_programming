#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - beginning function
 *
 * Return: Always 0 if the code is correct
 **/
int main(void)
{
	/* your code goes there */
	int a, b, c;

	for (a = '0'; a < '9'; a++)
	{
		for (b = a+1 ; b <= '9'; b++)
		{
			for (c = b+1 ; c <= '9'; c++)
			{
				if ((a < b ) < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == '7' && b == '8' && c == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
