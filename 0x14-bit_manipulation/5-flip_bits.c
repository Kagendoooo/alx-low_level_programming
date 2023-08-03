#include "main.h"
/**
 * flip_bits - Returns number of bits
 * that would be needed to flip one num to another
 * @n: number
 * @m: number to be flipped into
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}

	return (bits);
}
