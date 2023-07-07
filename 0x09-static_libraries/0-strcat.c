#include "main.h"
/**
 * _strcat - concatenates two strings
 * @src: input
 * @dest: output
 * Return: to dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
