#include "shell.h"


/**
 * find_path-a function that finds the path of an exe
 * @path_value: the value of the PATH env varible
 * @command: the enterd command
 * Return: the path of the command
 */


char *find_path(char *path_value, char *command)
{
	char **tokens;
	size_t i;
	char *path;

	struct dirent *read;

	file_node *head = NULL;
	DIR *open = NULL;

	i = 0;
	tokens = mod_strtok(path_value, ":");

	while (tokens[i] != NULL)
	{
		head = NULL;
		open = opendir(tokens[i]);

		if (open == NULL)
		{
			perror("Error");
			return (NULL);
		}

		while ((read = readdir(open)))
		{
			add_node_end(&head, read->d_name);
		}
		closedir(open);
		if (find_node(head, command) == 0)
		{
			path = _strcat(tokens[i], "/\0");
			_strcat(path, command);
			return (path);
		}
		free_list(head);
		i++;
	}

	return (NULL);
}
