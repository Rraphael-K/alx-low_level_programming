#include "lists.h"

/**
 * print_listint - Print elements of linked list
 * @h: Head of list
 *
 * Return: Number of nodes (count)
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int count;

	if (temp == NULL)
		return (0);

	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
