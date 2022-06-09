#include "main.h"
/**
 * _isupper - check uppercase
 *
 * @c: letter
 * Return: return 1 if uppercase else return 0
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        return (0);
}

