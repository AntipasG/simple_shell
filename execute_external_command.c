#include "shell.h"
/**
 *execute_external_command - excuting the comand
 *@command: the argument the command accepted
 *Return: void
 **/
void execute_external_command(char *command)
{
	pid_t child_pid;
	int status;

	if (access(command, X_OK) == 0)
	{
		child_pid = fork();
		if (child_pid == 0)
		{
			char **args = malloc(2 * sizeof(char *));

			args[0] = command;
			args[1] = NULL;
			if (execve(command, args, environ) == -1)
			{
				perror(command);
				free(args);
				exit(EXIT_FAILURE);
			}
			free(args);
		}
		else if (child_pid < 0)
		{
			perror("fork");
		}
		else
		{
			/* Parent process */
			waitpid(child_pid, &status, 0);
		}
	}
	else
	{
		fprintf(stderr, "%s: command not found\n", command);
	}
}
