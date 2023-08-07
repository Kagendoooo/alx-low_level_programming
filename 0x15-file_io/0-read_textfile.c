#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a text file
 * prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: name of file
 * Return: number of bytes read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rtf;
	char *buffer;
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);

	rtf = open(filename, O_RDONLY);
	if (rtf == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(rtf);
		return (0);
	}

	rd = read(rtf, buffer, letters);
	if (rd == -1)
	{
		close(rtf);
		free(buffer);
		return (0);
	}

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1 || wr != rd)
	{
		close(rtf);
		free(buffer);
		return (0);
	}

	close(rtf);
	free(buffer);

	return (wr);
}
