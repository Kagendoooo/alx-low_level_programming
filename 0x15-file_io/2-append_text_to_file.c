#include "main.h"
/**
 * append_text_to_file - Append text at end of file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int z;
	ssize_t wr;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	z = open(filename, O_WRONLY | O_APPEND);
	if (z == -1)
		return (-1);

	if (text_content != NULL)
	{
		wr = write(z, text_content, len);
		if (wr == -1 || (size_t)wr != len)
		{
			close(z);
			return (-1);
		}
	}

	close(z);
	return (1);
}
