#include "lists.h"

/**
 * add_nodeint - Add element to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: Integer
 *
 * Return: Address of new element (node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		node->next = *head;
	*head = node;
	return (node);
}
