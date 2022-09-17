#include "shell.h"
/**
 * _getenv- a function that returns the value of an environment variable
 * @env: the evironment variables
 * @var_env: the name of the enviroment variable
 * Return: the value of the enviroment variable
 */

char *_getenv(char **env, char *var_env)
{
	char *var_val;
	int rec, i = 0;

	while (env[i] != NULL)
	{

		rec = _strncmp(var_env, env[i], _strlen(var_env));

		if (rec == 0)
		{
			var_val = malloc(sizeof(char) * (_strlen(env[i]) - (_strlen(var_env) - 1)));
			if (var_val == NULL)
			{
				return (var_val);
			}
			varname_del(var_val, env[i], _strlen(var_env));

			return (var_val);
		}
		else
		{
			i++;
			continue;

		}

	}
	return (NULL);
}
