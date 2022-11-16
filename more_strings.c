#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: given string
 *
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	int size, x;
	char *dest;

	if (!str)
		return (NULL);

	size = _strlen(str) + 1;
	dest = malloc(size * sizeof(char));

	if (!dest)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		*(dest + x) = *(str + x);

		*(dest + x) = '\0';
	}
	return (dest);
}
