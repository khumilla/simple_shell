#ifndef SHELL_H
#define SHELL_H


/* header files */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <errno.h>

/* Macros */

#define TRUE 1
#define FALSE 0
#define BUFSIZE 1024

/* global variables */

extern char **environ;

/**
 * struct builtin_t - struct for built-in commands
 * @cmd: command name
 * @f: function to act on command
 */

typedef struct buitin_t
{
	char *cmd;
	int (*f)(char **, int, char *);
}builtin_t;

/* ________________________function prototypes_______________________________ */

/*executor*/
int execute(char **cmd, char *filename);

/*prompt*/
void init_prompt(void);

/*parser*/
char *rm_newline(char *line);
char **parse_input(char *line);
char *build_path(char *token, char *value);
int check_cmd_path(char **cmd);

/*string*/
int _strlen(const char *s);
char *_strstr(char *haystack, char *needle);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
int _strcmp(char *s1, char *s2);

/*getenv*/
char *_getenv(const char *name);

/*printers*/
int _putchar(int c);
int print(char *str);

/*utililities and strcmp*/
void free_memory_p(char *);
void free_memory_pp(char **);
int cmp(const char *s1, const char *s2);
int _atoi(char *s);
int _isalpha(char c);

/*more_string*/
char *_strdup(char *s);

/*builtins */
int exit_cmd(char **, int, char *);
int env_cmd(char **, int, char *);
builtin_t is_builtin(char *cmd);
int (*check_builtins(char **))(char **, int, char *);

#endif /*MAIN_H*/
