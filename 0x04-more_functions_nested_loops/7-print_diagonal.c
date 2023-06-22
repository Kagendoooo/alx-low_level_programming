#include "main.h"
/**
  * print_diagonal - Draw diagonal line
  * @n:  number of times the character \ should be printed
*/

void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 0; p < n; p++)
		{
			for (q = 0; q < p; q++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
