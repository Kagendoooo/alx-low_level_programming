#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * create_file - Create a function that creates a file.
 * @filename: file to create.
 * @text_content: content to write
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int z;

	ssize_t status;

	if (filename == NULL)
		return (-1);

	z = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (z == -1)
		return (-1);

	if (text_content != NULL)
	{
		status = write(z, text_content, strlen(text_content));
		if (status == -1)
		{
			close(z);
			return (-1);
		}
	}

	close(z);
	return (1);
}
