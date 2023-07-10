#include "main.h"
#include <stdlib.h>
/**
  * _strdup - Returns pointer to newly allocated space
  * contains copy of string given as parameter
  * @str: string to be copied
  * Return: null or pointer
*/

char *_strdup(char *str)
{
	int l = 0;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
	{
		l++;
	}
	r = malloc(sizeof(char) * (l + 1));
	if (!r)
	{
		return (NULL);
	}
	for (l++; l--;)
	{
		r[l] = *--str;
	}
	return (r);
}
