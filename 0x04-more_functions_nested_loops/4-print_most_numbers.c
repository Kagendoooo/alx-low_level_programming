#include "main.h"
/**
  * print_most_numbers - 'Prints all digits except 2 and 4'
  * Return: numbers between 0 and 9
*/

void print_most_numbers(void)
{
	int s;

	for (s = 0; s <= 9; s++)
	{
		if (s == 2 || s == 4)
		{
			continue;
		}
		else
		{
			_putchar(s + '0');
		}
	}
	_putchar('\n');
}
