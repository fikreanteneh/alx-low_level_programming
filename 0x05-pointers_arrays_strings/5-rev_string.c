#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 */
void print_rev(char *s)
{
	char word;
	
	int x;
	
	int y;
	
	int z;

	x = 0;
	
	z = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	z = x-1;
	for (y =  0; y < z / 2; y++)
	{
		word = s[y];
		s[y] = s[z];
		s[z--] = word;
	}
		
}
