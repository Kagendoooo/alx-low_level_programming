#include "main.h"
/**
 * _isalpha - 'Check if a letter'
 * @c: Char to be checked
 * Return: 1 if succesful, 0 otherwise
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
