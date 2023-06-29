#include "main.h"
/**
 *reverse_array - reverses contents of an array of integers
 *@a: array value
 *@n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < n--; g++)
	{
		h = a[g];
		a[g] = a[n];
		a[n] = h;
	}
}
