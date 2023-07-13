#include "main.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: Pointer to new array
 */

int *array_range(int min, int max)
{
	int *p, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (!p)
		return (NULL);
	while (n--)
		p[n] = max--;
	return (p);
}
