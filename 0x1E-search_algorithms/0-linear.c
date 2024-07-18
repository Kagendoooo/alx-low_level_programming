#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: Pointer to the first element of the array in search
 * @size: number of array elements
 * @value: value to search
 * Return: First index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t z;

	if (array == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		printf("Value checked array[%ld] = [%d]\n", z, array[z]);
		if (array[z] == value)
			return (z);
	}
	return (-1);
}
