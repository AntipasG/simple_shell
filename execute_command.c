#include "shell.h"
/**
 *execute_command - the command excution for exit and env
 *@command: the command it takes
 *Return: void
 **/

void execute_command(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		free(command);
		execute_builtin_exit();
	}
	else if (strcmp(command, "env") == 0)
	{
		free(command);
		execute_builtin_env();
	}
	else
	{
		execute_external_command(command);
	}
}
