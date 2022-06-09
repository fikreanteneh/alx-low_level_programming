#include "main.h"
/**
 * print_numbers - print number 0-9
 */
void print_numbers(void)
{
	int i = 48;
	while (i < 60)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
