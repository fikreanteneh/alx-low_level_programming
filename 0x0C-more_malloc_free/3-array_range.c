#include "main.h"

/**
 * array_range - function
 * @min: input
 * @max: input
 * Return: array
 */
int *array_range(int min, int max)
{
	int *arr, x = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (x <= max - min)
		arr[x++] = t++;
	return (arr);
}
