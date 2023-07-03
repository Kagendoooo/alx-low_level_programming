#include "main.h"
/**
 * print_chessboard - Print a chessboard
 * @a: array for chessboard
 */

void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
