#include "main.h"
/**
 * main - Entry point
 * Description: 'Print alphabet in lowercase'
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
