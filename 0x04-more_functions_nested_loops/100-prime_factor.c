#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143;
	int x = 2;

	while (x < n)
	{
		if (n % x != 0)
		{
			x++;
		}
		else
		{
			n = n / x;
			x = 2;
		}
	}
	printf("%ld", n);
	printf("\n");
	return (0);
}
