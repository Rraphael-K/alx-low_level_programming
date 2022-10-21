#include "lists.h"

/**
 * add_node_end - add news node at the end of list_t
 * @head: head of linked list
 * @str: String holder
 *
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes, *current;
	size_t count;

	new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	/* duplicate string */
	new_nodes->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	new_nodes->len = count;
	new_nodes->next = NULL;
	current = *head;

	/* add to the end of list */
	if (current == NULL)
		*head = new_nodes;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_nodes;
	}
}
