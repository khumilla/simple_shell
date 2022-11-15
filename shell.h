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
