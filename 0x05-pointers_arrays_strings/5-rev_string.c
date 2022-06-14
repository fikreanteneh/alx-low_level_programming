#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 */
void print_rev(char *s)
{
	int i, len, temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - 1 -i] = temp;
	}
}
