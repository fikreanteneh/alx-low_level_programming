#include "main.h"
/**
 * print_diagonal - print a adiagonal line in new line
 * @n: number of diagonal
 */

void print_diagonal(int n)
{
  int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < b; b++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
