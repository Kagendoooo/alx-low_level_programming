#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Return 2d array of integers
 * @width: input
 * @height: input
 * Return: null or pointer
 */

int **alloc_grid(int width, int height)
{
	int x, y, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);

		if (a[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(a[y]);
			}

			free(a);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			a[k][l] = 0;
		}
	}

	return (a);
}
