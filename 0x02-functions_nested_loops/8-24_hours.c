#include "main.h"
/**
 * jack_bauer - time counter function
 * Return: null.
 */
void jack_bauer(void)
{
	int minute = 0, hour = 0, min1 = 48, hour1 = 48, min2 = 48, hour2 = 48;

	while (!(hour1 == 50 && hour2 == 52))
	{
		while (minute < 60)
		{
			_putchar(hour1), _putchar(hour2);
			_putchar(':');
			_putchar(min1), _putchar(min2);
			_putchar('\n');
			(min2 == 57) ? (min2 = 48) : min2++;
			minute++;
			if (minute % 10 == 0)
			{
				min1++;
			}
		}
		minute = 0, min2 = 48, min1 = 48;
		(hour2 == 57) ? (hour2 = 48) : hour2++;
		hour++;
		if (hour % 10 == 0)
		{
			hour1++;
		}
	}
}
