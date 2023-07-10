#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of characters
 * initialize with specific char
 * @size: size of array
 * @c: char to initialize
 * Return: Null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	x = malloc(sizeof(char) * size);

	if (!size || x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
}
