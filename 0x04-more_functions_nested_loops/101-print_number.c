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
	int k = n;

	if (n < 0)
	{
		n = -1 * n;
		k = n;
		_putchar('-');
	}

	k = k / 10;

	if (k != 0)
		print_number(k);

	_putchar((int) n % 10 + '0');
}
