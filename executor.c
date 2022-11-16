#include "main.h"

/**
 * execute - execute parsed input
 * @cmd: command entered by user
 * @filename: name of shell
 *
 * Return: void
 */

int execute(char **cmd, char *filename)
{
	int status;
	pid_t pid;

	if (!*cmd)

		exit(-1);


	pid = fork();

	if (pid == -)
	{
		perror("Error");
		exit(-1);
	}

	if (pid == 0)
	{
		check_cmd_path(cmd);

		if (strncmp(cmd[0], "./", 2) && strncmp(cmd[0], "/", 1))

			check_cmd_path(cmd);

		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(filename);
			free_memory_pp(cmd);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))

			return (WEXITSTATUS(status));

	}
	return (0);
}

