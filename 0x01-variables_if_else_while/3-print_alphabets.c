#include <stdio.h>

/**
 * main - The code begins
 *
 * Return: It always return 0 if the code is correct
 */
int main(void)
{
	/* your code goes there */
  	int last = 122;
	int first;

	for (first = 97; first <= last; first++)
	{
		putchar(first);

		if (first == 122)
		{
			first = 64;
			last = 90;
		}
	}
	printf("\n");
	return (0);
}
