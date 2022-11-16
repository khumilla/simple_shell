#include "main.h"

/**
 * _strcpy - copies the content of a string to another
 * @dest: the destination string
 * @src: the source of the contents to be copied
 *
 * Return: @dest
 */
char *_strcpy(char *dest, const char *src)
{
	char *temp = dest;

	while (*src)
		*temp++ = *src++;

	*temp = '\0';

	return (dest);
}
