#include "main.h"
/**
 * _strpbrk - search a string for a set of bytes
 * @s: string to be checked
 * @accept: accepted bytes
 * Return: Pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
