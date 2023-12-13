#include "shell.h"

/**
 *main - check the code
 *
 *
 *
 *Return: Always 0
 **/

int main(void)
{
	char *command;

	while (1)
	{
		shell_prompt();
		command = read_command();

		if (command != NULL)
		{
			execute_command(command);
			free(command);
		}
	}
	return (0);
}
