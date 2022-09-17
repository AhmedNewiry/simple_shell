#include "shell.h"

 /**
  *add_node_end- a function that adds a node to the end
  * @head: double pointer to the head of the linked list
  * @str: the data
  * Return: pointer to the new node
  */



file_node *add_node_end(file_node **head, const char *str)
{

	file_node *new_node = NULL;
	file_node *temp = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(file_node));

	if (new_node != NULL)
	{
		new_node->file_name = strdup(str);
		if (new_node->file_name == NULL)
		{
			free(new_node);
			return (NULL);
		}


		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
