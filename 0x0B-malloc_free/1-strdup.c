#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - function
 * @str: input
 * Return: 0
 */

char *_strdup(char *str)
{
	int x = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	/*+1 on the size puts the end of string character*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	{
		for (; x < size; x++)
			m[x] = str[x];
	}
	return (m);
}
