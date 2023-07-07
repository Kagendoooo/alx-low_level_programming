#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
