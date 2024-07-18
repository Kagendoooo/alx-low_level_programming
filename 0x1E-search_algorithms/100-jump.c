#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using
 * the jump search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: The first index where value is located/
 * -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t x;
	size_t y;
	size_t step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (x = y = 0; y < size && array[y] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", y, array[y]);
		x = y;
		y += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", x, y);

	y = y < size - 1 ? y : size - 1;
	for (; x < y && array[x] < value; x++)
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	printf("Value checked array[%ld] = [%d]\n", x, array[x]);

	return (array[x] == value ? (int)x : -1);
}
