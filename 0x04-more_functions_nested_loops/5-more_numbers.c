#include "main.h"
/**
 * more_numbers - print 0 - 14
 */
void more_numbers(void)
{
	int i = 48, count = 48, c = 48;

	while (count < 58)
	{
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar('1');
				if (i == 10)
				{
					i = 0;
				}
			}
			_putchar(i + '0');
			i++;
			c++;
		}
		i = 0;
		c = 0;
		count++;
		_putchar('\n');
	}
}
