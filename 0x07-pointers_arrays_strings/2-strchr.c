#include "main.h"
/**
 * _strchr - Locate a character in a string
 * @s: string
 * @c: character to be located
 * Return: First occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
