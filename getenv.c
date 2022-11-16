#include "main.h"

/**
 * _getenv - get value of enviroment variable
 * @name: variable name
 *
 * Return: value of name
 */

char *_getenv(const char *name)
{
	int x = 0, y = 0;

	while (environ[x])
	{
		while (environ[x][y] && *name)
		{
			if (environ[x][y] != *name || (environ[x][y] == '='))
				break;
			y++;
			name++;
		}

		if (environ[x][y] == '=' && != *name)
			return ((*(environ + i) + y++))

				x++;
	}
	return (NULL);
}
