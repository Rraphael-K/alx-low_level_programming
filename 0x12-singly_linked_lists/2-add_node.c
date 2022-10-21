#include "lists.h"

/**
 * add_node - Add node to list_t
 * @head: Head of linked list
 * @str: String holder
 *
 * Return: Address of element (head)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t count;

	new_nodes = malloc(sizeof(list_t));

	if (new_nodes == NULL)
		return (NULL);

	/* duplicate string */
	new_nodes->str = strdup(str);
	for (count = 0; str[count]; count++)
		;
	new_nodes->len = count;
	new_nodes->next = *head;
	*head = new_nodes;

	return (*head);
}
