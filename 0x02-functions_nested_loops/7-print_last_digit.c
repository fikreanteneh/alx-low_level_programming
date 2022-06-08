#include "main.h"
#include <limits.h>

/**
 * print_last_digit - it print the last digit of n
 *
 * @n: any number 
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n % 10);
	}
	return (n % 10);
}
