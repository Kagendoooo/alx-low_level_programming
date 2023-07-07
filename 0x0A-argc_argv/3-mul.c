#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array to pointers to arguments
 * Return: 1 if not enough arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
