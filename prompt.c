#include "main.h"

/**
 * init_prompt- start the prompt screen for the shell
 *
 * Return: void
 */

void init_prompt(void)
{
	int p_1, s_1, t_1;
	char *p, *s, *t = "$ ";
	char *prompt = NULL;

	p = _getenv("user");
	s = _getenv("name");

	p_1 = _strlen(p);
	s_1 = _strlen(s);
	t_1 = _strlen(t);

	prompt = malloc(p_1 + s_1 + s_1 + 1);
	if (!p || !s || !prompt)
	{
		printf("$ ");
		return;
	}

	prompt = _strcpy(prompt, p);
	prompt = _strcpy(prompt, "@");
	prompt = _strcpy(prompt, s);
	prompt = _strcpy(prompt, t);

	print(prompt);

	free(promt);
}
