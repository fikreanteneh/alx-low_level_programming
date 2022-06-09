#include "main.h"
/**
 * more_numbers - print 0 - 14
 */
void more_numbers(void)
{
	int i = 48, count = 0, c = 0;

	while (count < 10)
	{
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar(49);
				if (i == 10)
				{
					i = 48;
				}
			}
			_putchar(i + '0');
			i++;
			c++;
		}
		i = 48;
		c = 0;
		count++;
		_putchar('\n');
	}
}
