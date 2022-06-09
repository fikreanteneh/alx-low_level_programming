#include "main.h"
/**
 * more_numbers - print 0 - 14
 */
void more_numbers(void)
{
	int i = 48, b = 0, a = 0;

	while (b < 10)
	{
		while (a <= 14)
		{
			if (a > 9)
			{
				_putchar(49);
				if (i == 10)
				{
					i = 48;
				}
			}
			_putchar(i + '0');
			i++;
			a++;
		}
		i = 48;
		a = 0;
		b++;
		_putchar('\n');
	}
}
