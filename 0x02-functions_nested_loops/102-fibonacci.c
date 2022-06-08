#include <stdio.h>
/**
 * main - fibonnaci seroes
 * @void: null
 * Return: 0
 */
int main(void)
{
	long int x = 1, y = 2, term = 0, sum;

	printf("%li, %li", x, y);
	while (term < 48)
	{
		sum = x + y;

		printf(", %li", sum);
		x = y;
		y = sum;
		term++;
	}
	printf("\n");
	return (0);
}
