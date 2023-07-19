#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: Pointer to function to compare
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
