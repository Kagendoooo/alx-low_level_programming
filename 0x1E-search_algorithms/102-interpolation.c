#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * the Interpolation search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: The first index where value is located
 * or -1 if value is not present
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t z;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		z = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (z >= size)
		{
			printf("Value checked array[%lu] is out of range\n", z);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", z, array[z]);

		if (array[z] == value)
			return (z);
		if (array[z] < value)
			low = z + 1;
		else
			high = z - 1;
	}

	return (-1);
}
