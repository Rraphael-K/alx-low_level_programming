#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node by a given index
 * @head : Head of the list
 * @index: index of the element to be deleted
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;
	unsigned int count;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (count = 0; count < (index - 1); count++)
	{
		if (copy->next == NULL)
		return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
