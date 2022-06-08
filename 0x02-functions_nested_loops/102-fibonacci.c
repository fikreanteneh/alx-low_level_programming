#include <stdio.h>
/**
 * main - fibonnaci seroes
 * @void: null
 * Return: 0
 */
int main(void)
{
	long int x = 1, y = 2, term = 0, sum;

	printf("%li, %li", num1, num2);
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
