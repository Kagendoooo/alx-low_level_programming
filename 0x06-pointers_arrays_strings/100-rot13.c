#include "main.h"
/**
 *rot13 - encode string using rot13
 * @d: character to be encoded
 * Return: d
 */

char *rot13(char *d)
{
	int x, y;
	char *reg = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; *(d + x) != '\0'; x++)
	{
		for (y = 0; *(reg + y) != '\0'; y++)
		{
			if (*(d + x) == *(reg + y))
			{
				*(d + x) = *(rot + y);
				break;
			}
		}
	}
	return (d);
}
