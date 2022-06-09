#include "main.h"
/**
 *print_most_numbers - print number 0-9
 */
void print_most_numbers(void)
{
	int i = 48;
	while (i < 60)
	{
    		if (i != 50 && i != 52)
    		{
			_putchar(i + '0');
		}
		i++;
	}
	_putchar('\n');
}
