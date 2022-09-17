#include "shell.h"
/**
 * builtin_exec- a function that executes the buitin commands
 * @tokens: the command line arguments of the simple shell
 * @env: environment variables
 * Return: 0 or 1 if success and -1 if not
 */

int builtin_exec(char **tokens, char **env)
{
	size_t i = 0, x = 0, len, y = 0;
	int rx;

	builtin_fun func_array[] = {

		{"exit", _exit_fun},
		{"env", _env_fun},
		{NULL, NULL},

	};

	if (tokens == NULL)
	{
		return (-1);
	}

	len = _strlen(tokens[0]);

	while (func_array[i].name != NULL)
	{

		i++;
	}

	while (x < i)
	{
		if (_strncmp(tokens[0], func_array[x].name, len) == 0)
		{
			rx = (func_array[x].fun_ptr(env));
			return (rx);
		}
		x++;
	}
	return (-1);
}
