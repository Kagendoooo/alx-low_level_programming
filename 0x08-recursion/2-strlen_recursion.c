#include "main.h"
/**
 *  _strlen_recursion - Return length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;
	if (*s != 0)
	{
		l++;
		return (l + _strlen_recursion(s + 1));
	}
	return (l);
}
