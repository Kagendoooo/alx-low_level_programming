#include "main.h"
/**
 * _islower - 'Check if lowercase'
 * @c: Char to be checked
 * Return: 1 if succesful, 0 otherwise
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
