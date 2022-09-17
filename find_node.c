#include "shell.h"
/**
 * find_node- a function that finds a specific node in a list
 * @h: the pointer to the linked list head
 * @str: the specific data in a the linked list
 * Return: 0 if found or -1 if error
 */


int find_node(file_node *h, char *str)
{

	while (h != NULL)
	{
		if (_strcmp(h->file_name, str) == 0)
		{
			return (0);
		}
		h = h->next;
	}
	return (-1);
}
