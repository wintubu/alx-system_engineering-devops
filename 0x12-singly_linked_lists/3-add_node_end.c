#include "lists.h"

/**
 * add_node_end -Is a function that adds a new node at the end of a list
 *@head: Is a pointer to the head of the list
 *@str:Is the string string to be added to the list
 *
 *Return: NULL in case of failure
 *or address or the element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int lethn;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length];)
		length++;

	new_node->str = dup;
	new_node->length = length;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
