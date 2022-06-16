/*
 * reverse_array - reverse
 * @a: string
 * @n: number
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;
	int tmp;

	b = n - 1;
	for (c = 0; c < n / 2; c++)
	{
		tmp = a[c];
		a[c] = a[b];
		a[b--] = tmp;
	}
}
