#include "search_algos.h"
#include <stdio.h>

/**
 * _binary_search - Searches for a value in a sorted array
 * using the binary search algorithm
 * @array: pointer to first element of array
 * @first: starting index
 * @last: ending index
 * @value: value to search for
 * Return: The index where value is located
 * or -1 if the value is not present/NULL
 */

int _binary_search(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	size_t x;

	while (first <= last)
	{
		printf("Searching in array: ");
		for (x = first; x <= last; x++)
		{
			if (x != first)
				printf(", ");
			printf("%d", array[x]);
		}
		printf("\n");

		mid = first + (last - first) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 * of integers using the Exponential search algo
 * @array: Pointer to first element of the array
 * @size: elements in the array
 * @value: value to search for
 * Return: first index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, last;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	last = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, last);
	return (_binary_search(array, x / 2, last, value));
}
