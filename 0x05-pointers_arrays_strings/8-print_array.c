#include "main.h"
#include <stdio.h>
/**
  * print_array - prints n elements of an array of integers
  * @n: number of elements of the array to be printed
  * @a: array of integers
  * Numbers must be separated by comma, followed by a space
  * displayed in the same order as they are stored in the array
*/

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < n; p++)
	{
		printf("%d", a[p]);
		if (p != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
