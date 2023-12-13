#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

void shell_prompt(void);
char *read_command(void);
void execute_command(char *command);
void execute_external_command(char *command);
void execute_builtin_exit(void);
void execute_builtin_env(void);


extern char **environ;
#endif
