#include "main.h"
/**
 * print_most_numbers - print numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 60)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
