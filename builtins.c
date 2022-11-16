#include "main.h"

/**
 * is_builtin - checks if a command is a built-in command
 * @cmd: given command
 *
 * Return: Position of cmd in the array
 */

builtin_t is_builtin(char *cmd)
{
	builtin_t builtins[] = {
		{"exit", exit_cmd},
		{"env", env_cmd},
		{NULL, NULL}
	};

	int x;

	for (x = 0; builtins[x].cmd; x++)

		if (_strcmp(builtins[x].cmd, cmd) == 0)

			return (builtins[x]);

		return (builtins[x]);
}

/**
 * check_builtins - if command is built-in
 * @cmd: an array of commands and arguments
 *
 * Return: function to be executed, else NULL
 */

int (*check_builtins(char **cmd))(char **, int, char *)
{
	builtin_t b = is_builtin(cmd[0]);

	if (b.cmd)

		return (b.f);

	return (NULL);
}

/**
 * env_cmd - built-in implementation of env command
 * @cmd: unused
 * @status: status code
 *
 * Return: void
 */

int env_cmd(char **cmd, int status, char *filename)
{
	int y;

	(void) cmd;
	(void) status;
	(void) filename;

	for (y = 0; environ[y]; y++)
	{
		print(environ[y]);
		_putchar('\n');
	}
	return (0);
}

/**
 * exit_cmd - builtin implementation of exit command
 * @cmd: an array of given commands and arguments
 * @status: status code
 *
 * Return: exit code
 */

int exit_cmd(char **cmd, int status, char *filename)
{
	int x = 0;

	if (!cmd[1])
	{
		free_memory_pp(cmd);
		exit(status);
	}

	while (cmd[1][i])
	{
		if (_isalpha(cmd[1][i]) && cmd[1][i] != '-')
		{
			print(filename);
			print(": ");
			print(cmd[0]);
			print(": ");
			print("Illegal: ");
			print(cmd[1]);
			_putchar('\n');;
			return (1);
		}
		i++;
	}

	status = _atoi(cmd[1]);
	free_memory_ppp(cmd);

	exit(status);
}

