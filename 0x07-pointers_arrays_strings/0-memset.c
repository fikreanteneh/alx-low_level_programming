/**
 **_memset - fills memory with constant
 *@s: memory
 *@b: char
 *@n: number of times to be copied
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
