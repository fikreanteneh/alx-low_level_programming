#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x = 0;
	
	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x = x + 1;
	}
	return (0);
}
