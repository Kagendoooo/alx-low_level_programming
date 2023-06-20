#include "main.h"
/**
  *print_last_digit - 'Print last digit of a number'
  * @x: integer to get last digit from
  * Return: last value of number
*/


int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y > 0)
	{
		_putchar(y + 48);
		return (y);
	}
	else
	{
		_putchar(-y + 48);
		return (-y);
	}
}
