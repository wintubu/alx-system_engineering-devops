#include "lists.h"

/**
 *free_list -A function that Frees a list
 *@head: Is a pointer to the head of the list
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
