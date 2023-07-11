#include "main.h"
#include <stdlib.h>
/**
 * argstostr - prints args
 * @ac: argc
 * @av: argv
 * Return: null or pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int z = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			z++;
			b++;
		}
		a++;
	}
	z = z + ac + 1;
	str = malloc(sizeof(char) * z);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
