#include "main.h"
#include <stdlib.h>
/**
  * str_concat - Concatenates two strings
  * @s1: input
  * @s2: input
  * Return: Null or pointer
*/

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	char *z;

	while (s1 && *s1++)
	{
		x++;
	}
	while (s2 && *s2++)
	{
		y++;
	}
	z = malloc(sizeof(char) * (x + y + 1));
	if (!z)
	{
		return (NULL);
	}
	z += x + y;
	*z = '\0';
	for (s2--; y--;)
	{
		*--z = *--s2;
	}
	for (s1--; x--;)
	{
		*--z = *--s1;
	}
	return (z);
}
