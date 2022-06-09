#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints a number
 *
 * @n: integer
 *
 * Return: nothing
 */

void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		n = -1 * n;
		x = n;
		_putchar('-');
	}

	x = x / 10;

	if (x != 0)
		print_number(x);

	_putchar((int) n % 10 + '0');
}
