#include "main.h"

/**
 * puts2 - prints oeach character in a new line
 * @str: string
 */
void puts2(char *str)
{
	int x, i;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
