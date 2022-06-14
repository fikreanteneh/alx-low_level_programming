#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 */
void print_rev(char *s)
{
	char tmp;
	int i;
	int x;
	int y;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		tmp = s[i];
		s[i] = s[y];
		s[y--] = tmp;
	}
}
