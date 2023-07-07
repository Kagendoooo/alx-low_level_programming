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
	int a = 0;
	char *x;

	while (--argc)
	{
		for (x = argv[argc]; *x; x++)
		{
			if (*x < '0' || *x > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		a += atoi(argv[argc]);
	}
	printf("%d\n", a);
	return (0);
}
