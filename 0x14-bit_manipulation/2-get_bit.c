#include "main.h"
/**
 * get_bit - Returns value of bit at given index
 * @index: index to get at
 * @n: the bit
 * Return: -1 or value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
