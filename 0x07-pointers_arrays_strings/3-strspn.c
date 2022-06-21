/**
 * _strspn - prefix substring
 * @s: string
 * @accept : string
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;
	int x = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		x = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				x = 1;
			}
		}
		if (x == 0)
		{
			return (c);
		}
	}
	return (0);
}
