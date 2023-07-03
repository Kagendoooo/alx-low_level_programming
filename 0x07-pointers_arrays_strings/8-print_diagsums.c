#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - Print sum of diagonals of a square matrix
  * @a: matrix
  * @size: length of arrays
*/

void print_diagsums(int *a, int size)
{
	int m1 = 0;
	int m2 = 0;
	int j;

	for (j = 0; j < size; j++)
	{
		m1 = m1 + a[j * size + j];
	}
	for (j = size - 1; j >= 0; j--)
	{
		m2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", m1, m2);
}
