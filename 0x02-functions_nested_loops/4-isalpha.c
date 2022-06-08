#include "main.h"

/**
 * _isalpha - checks if a char is letter or not
 *
 *@c: the char parameter
 * Return: 1 if c is letter, otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

