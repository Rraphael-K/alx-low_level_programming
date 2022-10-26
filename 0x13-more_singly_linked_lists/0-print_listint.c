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
	size_t count = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
