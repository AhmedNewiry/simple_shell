#include "shell.h"
/**
 * main- main entry point
 * @argc: number of command line arguments
 * @argv: NULL terminated array of strings containing the CLI arguments
 * @env: enviroment variables
 * Return: Always 0 on success
 */

int main(int argc __attribute__((unused)), char **argv, char *env[])
{
	int x, n;
	char **tokens = NULL, *buffer = NULL;
	size_t line_len = 100;

	while (1)
	{
		_puts("$ ");
		if (getline(&buffer, &line_len, stdin) == -1)
			return (-1);
		for (x = 0; buffer[x] != '\0'; x++)
		{
			n = _strlen(buffer) - 1;
			if (x == n)
				buffer[x] = '\0';
		}
		if (buffer[0] == '\n')
		{
			continue;
		}
		tokens = mod_strtok(buffer, " ");
		if (tokens == NULL && argv == NULL)
		{
			continue;
		}
		else
		{
			if (filesys_exec(tokens, argv, env) == -1)
				continue;
		}
	}
free(tokens);
free(buffer);
return (0);
}
