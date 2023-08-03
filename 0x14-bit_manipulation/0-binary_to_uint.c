#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: pointer to a string of 0 or 1
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bi = 0;

	if (b == NULL)
		return (0);
	for (; *b != '\0'; b++)
	{

		if (*b != '0' && *b != '1')
			return (0);
		bi  = (bi << 1) + (*b - '0');
	}
	return (bi);
}
