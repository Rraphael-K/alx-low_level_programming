#include "lists.h"
/**
 * get_nodeint_at_index - find an element in a linked list
 * @head : head of the linked list
 * @index: index of the node to find
 * Return: The nth element of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;

	for (count = 0; (count < index) && (head->next); count++)
		head = head->next;

	if (count < index)
		return (NULL);

	return (head);
}
