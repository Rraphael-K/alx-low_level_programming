#include "lists.h"

/**
 * listint_len - Number of elements in linked list
 * @h: Head of list
 *
 * Return: Number of elements/nodes (count)
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
