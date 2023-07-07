#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array to pointers to arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, n, z = 0, coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		return (puts("0"), 1);
	}
	for (x = 0; x < 5; x++)
	{
		if (n / coins[x])
		{
			z += n / coins[x];
			n %= coins[x];
		}
	}
	printf("%d\n", z);
	return (0);
}
