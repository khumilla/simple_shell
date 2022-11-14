#include "main.h"

/**
 * exec - handles command execution
 * description - a dunction that handles the execution of commands
 *
 * @argv: pointer to string
 * Return: void
 */

void exec(char **argv)
{
	char *command = NULL;

	if (argv)
	{
		command = argv[0];

		if (execve(command, argv, NULL) == -1)
		{
			perror("Error: ");
		};
	}
}
