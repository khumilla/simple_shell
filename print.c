#include "main.h"

/**
 * _putchar - prints character to stdout
 * @c: character to be printed
 *
 * Return: 1 for success, -1 fail
 */

int _putchar(int c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

/**
 * print - printing string to stdout
 * @str: string to be printed
 *
 * Return: string or -1 if failed
 */

int print(char *str)
{
	int n_bytes = strlen(str);

	return (write(STDOUT_FILENO, str, n_bytes));
}
