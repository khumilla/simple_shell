#include "main.h"

/**
 * _strlen - function to find the length of a string
 * @s: string to be examined
 *
 * Return: the length of the string
 */

int _strlen(const char *s)
{
	int x = 0;

	if (!s)
		return (0);

	while (*s++)
		x++;

	return (x);
}

/**
 * _strstr - fucntion to implement strstr find a substring
 * @haystack: place to be searched for substring
 * @needle: substring to be found
 *
 * Return: a pointer to first member of substring or else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle) && cmp(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (NULL);
}

/**
 * _strcat- function to concatenate two strings
 * @dest: the destination
 * @src: the source
 *
 * Return: the concaternated string
 */

char *_strcat(char *dest, const char *src)
{
	int len_dest;
	i = 0;

	len_dest = _strlen(dest);

	while (src[i])
		dest[len_dest++] = src[i++];
	dest[len_dest] = '\0';

	return (dest);
}
