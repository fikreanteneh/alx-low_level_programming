#include "main.h"

/**
 * print_sign - check whether a number is positive or negative
 *
 * @n: can take any number as parameter
 * Return: it returns 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
