#include "lists.h"

/**
 * list_len - length of the list
 * @h: singly linked list
 *
 * Return: Num of elemnts in list
 */
size_t list_len(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	for (count = 1; h->next != NULL; count++)
		h = h->next;

	return (count);
}
