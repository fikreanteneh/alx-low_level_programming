#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
