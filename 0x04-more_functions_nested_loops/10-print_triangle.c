#include "main.h"
/**
 * print_triangle - print right triangle
 * @size: size
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; ++x)
		{
			for (y = 1; y < size - x; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
