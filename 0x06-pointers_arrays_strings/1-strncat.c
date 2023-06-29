#include "main.h"
/**
 * _strncat-concatenates two strings
 * it will use at most n bytes
 * @dest: destination
 * @src: source
 * @n: input
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0, l = 0;

	while (dest[m])
	{
		m++;
	}

	while (l < n && src[l])
	{
		dest[m] = src[l];
		m++;
		l++;
	}

	dest[m + n + 1] = '\0';

	return (dest);
}
