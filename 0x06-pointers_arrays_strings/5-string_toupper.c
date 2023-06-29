#include "main.h"
/**
 * string_toupper- change lowercase to uppercase
 * @z: string to be modified
 * Return: z
 */

char *string_toupper(char *z)
{
	int a = 0;

	while (z[a])
	{
		if (z[a] >= 97 && z[a] <= 122)
		{
			z[a] -= 32;
		}

		a++;
	}

	return (z);
}

