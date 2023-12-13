#include "shell.h"

/**
 *read_command - that read the cmd
 *
 *
 *Return: buffer
 **/
char *read_command(void)
{
	char *buffer = NULL;
	size_t bufsize = 0;

	if (getline(&buffer, &bufsize, stdin) == -1)
	{
		free(buffer);
		exit(EXIT_SUCCESS);
	}
	buffer[strcspn(buffer, "\n")] = '\0';
	return (buffer);
}
