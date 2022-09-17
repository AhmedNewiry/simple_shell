#include "shell.h"
/**
 * free_list- a function that frees a linked list
 * @head: pointer to the linked list
 */


void free_list(file_node *head)
{
	file_node *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->file_name);
		free(temp);
	}
}
