#include "main.h"
/**
 * _puts - Prints a string
 * followed by a new line, to stdout
 * @str : String to be printed
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
