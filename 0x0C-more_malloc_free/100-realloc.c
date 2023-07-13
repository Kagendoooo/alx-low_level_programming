#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocate memory block
 * use malloc and free
 * @ptr: pointer to memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 * Return: Null or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
