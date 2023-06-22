#include "main.h"
/**
  * print_line - 'Draw a straight line'
  * @n: number of lines to be drawn
*/

void print_line(int n)
{
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
