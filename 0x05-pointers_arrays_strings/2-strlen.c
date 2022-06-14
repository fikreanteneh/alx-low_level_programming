/**
 * _strlen - length of strung
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int x;
	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
