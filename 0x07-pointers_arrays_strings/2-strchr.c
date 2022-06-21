#include "main.h"
#include <stdio.h>

/* *
 * *_strchr - function that locates a character in a string
 * @s: string to search from
 * @c: char to find from the string
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
