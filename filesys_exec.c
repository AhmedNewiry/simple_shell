#include "shell.h"
/**
 * filesys_exec- a function that executes a filesystem executable
 * @tokens: command line argument.
 * @env: is a variable environment.
 * Return: 0 if success, and -1 if faild.
 */

int filesys_exec(char **tokens, char **env)
{

	pid_t pid;
	char *path = NULL;

	int x = 0;


	path = tokens[0];
	pid  = fork();

	if (pid == -1)
	{
		return (-1);
	}

	if (pid == 0)
	{

		x = execve(path, tokens, env);
		if (x == -1)
		{
			_puts(path);
			write(STDERR_FILENO, PERROR, _strlen(PERROR));
			exit(-1);
		}
	}

	wait(NULL);
	return (0);

}
