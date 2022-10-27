#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new element at nth position
 * @head : Head of the list
 * @idx  : index of the list where the new node will be added
 * @n    : value for the element to be added
 * Return: Pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	unsigned int index;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
		return (node);
	}

	for (index = 0; index < (idx - 1); index++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	node->next = temp->next;
	temp->next = node;

	return (node);
}
