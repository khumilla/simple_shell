#include "main.h"

/**
 * main - function to see create a propmt for simple shell
 * @argc: argument counter
 * @argv: argument vectors
 * Return: always 0
 */

int main(int argc, char **argv)
{
	char *prompt = "simpleshell $ ";/***argv;*/
	char *lineptr = NULL; /*points to address of buffer*/
	size_t n = 0; /* size allocation in bytes but using getline*/
	ssize_t nchars_read;
	char *lineptr_token = NULL;
	const char *delim = " \n";
	int num_tokens = 0, i = 0;
	char *token;

	/*lineptr_token = malloc(sizeof(char) * nchars_read);*/

	/*declare void variab/les*/
	(void)argc;
	/*(void)argv;*/

	/*create a loop*/
	while (1)
	{
		printf("%s", prompt); /*prints the $ for prompt*/
		nchars_read = getline(&lineptr, &n, stdin);

		if (nchars_read == -1)
		{
			printf("Shell terminated\n");
			return (-1);
		}
		lineptr_token = malloc(sizeof(char) * nchars_read);
		if (lineptr_token == NULL)
		{
			perror("Error! memory allocation error");
			return (-1);
		}

		strcpy(lineptr_token, lineptr);
		token = strtok(lineptr, delim);

		while (token != NULL)
		{
			num_tokens++;
			token = strtok(NULL, delim);
		}
		num_tokens++;

		argv = malloc(sizeof(char *) * num_tokens);

		token = strtok(lineptr_token, delim);

		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);

			token = strtok(NULL, delim);
		}
		argv[i] = NULL;

		printf("%s\n", lineptr);
	}
	free(lineptr_token);
	free(lineptr);

	return (0);
}
