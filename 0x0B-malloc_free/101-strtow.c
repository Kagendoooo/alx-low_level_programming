#include "main.h"
#include <stdlib.h>

/**
 * word_length - locates index marking of end of first word
 * @str: string
 * Return: index marking point
 */

int word_length(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}

	return (length);
}

/**
 * word_count - counts number of words in string
 * @str: string to be checked
 * Return: number of words
 */

int word_count(char *str)
{
	int index = 0, words = 0, length = 0;

	for (index = 0; *(str + index); index++)
		length++;

	for (index = 0; index < length; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_length(str + index);
		}
	}

	return (words);
}

/**
 * strtow - split string into two
 * @str: string
 * Return: null or pointer
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_length(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
