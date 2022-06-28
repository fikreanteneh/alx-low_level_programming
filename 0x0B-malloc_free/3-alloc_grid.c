#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Function
 * @width: input
 * @height: input
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoDim;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDim = malloc(sizeof(int *) * height);

	if (twoDim == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoDim[hgt_index] = malloc(sizeof(int) * width);

		if (twoDim[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twoDim[hgt_index]);

			free(twoDim);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twoDim[hgt_index][wid_index] = 0;
	}

	return (twoDim);
}
