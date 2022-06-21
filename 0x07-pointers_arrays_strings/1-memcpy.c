/**
 * *_memcpy - copies memory area
 * @dest: memory area source
 * @src: to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1
	}
	return (dest);
}
