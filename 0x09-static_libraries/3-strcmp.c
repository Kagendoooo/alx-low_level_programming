#include "main.h"
/**
 *  _strcmp - Compares two things
 * @s1: First string
 * @s2: Second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int f;

	f = 0;
	while (s1[f] != '\0' && s2[f] != '\0')
	{
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
		f++;
	}
	return (0);

}
