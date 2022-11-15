#include "main.h"

/**
 * free_memory_p - a function to free pointer to null
 * description: free pointer if is it not null
 * @ptr: pointer
 */

void free_memory_p(char *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
	}

	ptr = NULL;
}

/**
 * free_memory_pp - a function for freeing a double pointer
 * description: freeing double pointer using tmp
 * @ptr: double pointer
 */

void free_memory_pp(char **ptr)
{
	char **tmp;


	for (tmp = ptr; *tmp != NULL; tmp++)
		free_memory_p(*tmp);

	free(ptr);
}

/**
 * cmp - a function to check for string
 * @s1: string to be searched
 * @s2: string to be found
 * Description: similar to the strcmp function
 *
 * Return: 0 if fails, 1 for success
 */

int cmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
		if (*s1++ != *s2++)
			return (0);
	return (*s2 == '\0');
}

/**
 * _isalpha - check for whether a character is a letter
 * @c: character to be checked
 *
 * Return: TRUE or FALSE
 */

int _isalpha(char c)
{
	if ((c >= 48) && (c <= 57))
		return (FALSE);

	return (TRUE);
}

/**
 * _atoi - function to change string to integers
 * description: string to integer
 * @s: the string
 *
 * Return: integers
 */

int _atoi(char *s)
{
	int len, i = 0, FLAG = 0, d = 0, n = 0, digit;

	for (len = 0; s[len] != '\0'; len++)

	while (i < len && FLAG == 0)
	{
		if (s[i] == '-')
			d++;
		if (s[i] >= 48 && s[i] <= 57)
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			FLAG = 1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
			FLAG = 0;
		}
		i++;
	}
	if (FLAG == 0)
		return (0);

	return (n);
}
