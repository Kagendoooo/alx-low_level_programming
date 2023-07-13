#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory for an array
 * @nmemb: number of elements
 * @size: byte size
 * Return: Null or Pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	f = m;

	for (i = 0; i < (size * nmemb); i++)
		f[i] = '\0';

	return (m);
}
