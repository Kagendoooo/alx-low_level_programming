#include "dog.h"
#include <stdlib.h>
/**
 * _strlen- Returns length of string
 * @s: string
 * Return: p
 */

int _strlen(char *s)
{
	int p = 0;

	while (*s != '\0')
	{
		p++;
		s++;
	}
	return (p);
}

/**
 * _strcopy - Copy a string
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcopy(char *dest, char *src)
{
	int f;

	for (f = 0; src[f] != '\0'; f++)
	{
		dest[f] = src[f];
	}

	dest[f++] = '\0';

	return (dest);
}

/**
 * new_dog - Create new dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct of dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}

	doggo->name = _strcopy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcopy(doggo->owner, owner);

	return (doggo);
}
