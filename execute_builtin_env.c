#include "shell.h"

/**
 *execute_builtin_env - the environment built
 *
 *
 *Return: void
 **/


void execute_builtin_env(void)
{
	char **env = environ;

	while (*env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
