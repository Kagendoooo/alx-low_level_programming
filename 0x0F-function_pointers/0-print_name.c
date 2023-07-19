#include "function_pointers.h"
/**
 * print_name - Print a name
 * @name: name to printed
 * @f: A pointer to function that prints a name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
