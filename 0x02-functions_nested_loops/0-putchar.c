#include <stdio.h>

/**
 * main - The code begins
 * 
 * Return: Always return 0 if the code is correct
 */


int main(void)
{
	char *abc = "_putchar";

	while (*abc != '\0')
	{
		putchar(*abc);
		abc++;
	}
	putchar('\n');
	return (0);
}
