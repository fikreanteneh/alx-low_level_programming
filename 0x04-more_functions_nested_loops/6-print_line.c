#include "main.h"
/**
 * print_line - print __lines
 * @n: number
 */
void print_line(int n)
{
  while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
