#include "main.h"
/**
 * _strlen- Returns length of string
 * @s: string
 * Return: p
 */

int _strlen(char *s)
{
	int p = 0;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	return (p);
}
