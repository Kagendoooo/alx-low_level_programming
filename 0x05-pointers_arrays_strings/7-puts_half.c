#include "main.h"
/**
  * puts_half - prints half of a string, followed by a new line
  * function should print the second half of the string
  * @str: input
*/

void puts_half(char *str)
{
	int y = 0;
	int z;

	while (str[y] != '\0')
	{
		y++;
	}
	if (y % 2 == 1)
	{
		z = (y - 1) / 2;
		z += 1;
	}
	else
	{
		z = y / 2;
	}
	for (; z < y; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
