#include "main.h"
/**
   * print_alphabet - print all alphabet in lowercase
    */


void print_alphabet(void)
{
	int k = 97;

	while (k <= 122)
	{
		_putchar(k);
		k++;
	}
	_putchar('\n');
}
