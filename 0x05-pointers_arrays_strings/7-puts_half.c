#include "main.h"

/**
 * puts_half - prints half the string
 * @str: string
 */
void puts_half(char *str)
{
	int length, n, x;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (x = length / 2; x <= length - 1; x++)
		{
			_putchar(str[x]);
		}
	} 
	else
	{
		for (n = (length - 1) / 2; n < length - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
