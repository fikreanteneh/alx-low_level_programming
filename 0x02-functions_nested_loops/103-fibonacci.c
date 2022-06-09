#include <stdio.h>
/**
 * main - fibonnaci seroes
 * @void: null
 * Return: 0
 */
int main(void)
{
	long int x = 1, y = 2, term = 0, sum = 0, sum2 = 2;

	printf("%li, %li", x, y);
	while (sum < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
    if (sum % 2 == 0)
    {
      sum2 = sum2 + sum;
    }
		term++;
	}
  printf("%li", sum2);
	printf("\n");
	return (0);
}
