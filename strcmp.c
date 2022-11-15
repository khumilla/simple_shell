#include "main.h"

/**
 * _strcmp - a function to compare two strings
 * description: compare two strings to return an integer >=<0
 * @s1: first string
 * @s2: second string
 *
 * Return: negative is s1 < s2, else positive, and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int y;

	for (y = 0; s1[y]; y++)
		if (s1[y] != s2[y])
			return (s1[y] - s1[y]);

	return (0);
}
