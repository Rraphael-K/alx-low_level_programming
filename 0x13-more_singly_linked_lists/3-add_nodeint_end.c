#include "lists.h"

/**
 * add_nodeint_end - Add Element to the end of a linked list
 * @head: pointer to the head of the list
 * @n: Integer
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = NULL;
	}
	else
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	else
		*head = node;
	return (node);
}
