#include <stdio.h>
/**
 * main - Fizz and Buzz
 * Return: Always 0.
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; ++a)
	{
		if (a % 5 == 0 && a % 3 == 0)
		{
			printf("FizzBuzz");
      			printf(" ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
      			printf(" ");
		}
		else if (a % 5 == 0 && a != 100)
		{
      			printf("Buzz");
      			printf(" ");
    		}
		else if (a == 100)
		{
		  printf("Buzz");
		}
     		else
     		{
		 	printf("%a ", a);
		}
	}
	printf("\n");
	return (0);
}
