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
		
		print_prompt(STDIN_FILENO);
		if (getline(&buffer, &line_len, stdin) == -1)
		{
			free(buffer);
			return (-1);
		}

		if (buffer[0] == '\n')
		{                                                           

			continue;
		}

		for (x = 0; buffer[x] != '\0'; x++)
		{
			n = _strlen(buffer) - 1;
			if (x == n)
			{
				buffer[x] = '\0';
			}
		}
		tokens = mod_strtok(buffer, " ");
		if (tokens == NULL && argv == NULL)
		{
			free(buffer);
			continue;
		}
		else
		{
	
			x = filesys_exec(tokens, argv, env);
			if (isatty(STDIN_FILENO))
			{
				__free(buffer, tokens);
				continue;
			}
			if (x == -1 && !isatty(STDIN_FILENO))
			{
				__free(buffer, tokens);
				exit(-1);
			}
			if (x != -1 && !isatty(STDIN_FILENO))
			{
				__free(buffer, tokens);
				exit(0);
			}
		}
	}
return (0);
}

/**
 * __free- a function that frees all dynamically allocated memory
 * @buffer: fitst parameter
 * @tokens: second paramater
 */
void __free(char *buffer, char **tokens)
{
free(buffer);
free(tokens);

}
