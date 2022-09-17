#include "shell.h"
/**
 * _exit_fun - a function that exits the simple simple
 * @env: is a variable environment.
 * Return: integer
 */
int _exit_fun(char **env __attribute__((unused)))
{

	return (1);
}


/**
 * _env_fun- a function that prints the environment variables.
 * @env: is a variable environment.
 * Return: Always 0 on success.
 */


int _env_fun(char **env)
{

	size_t i, x = 0;

	while (env[x])
	{
		x++;
	}


	for (i = 0; env[i] != NULL; i++)
	{
		_puts(env[i]);

		_putchar('\n');

	}

	return (0);

}
