#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}

	dest[f++] = '\0';

	return (dest);
}
