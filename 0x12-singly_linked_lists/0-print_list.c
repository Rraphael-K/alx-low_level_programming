#include "list.h"

/**
 * print_list - Func to add variables to struct list
 *
 * Return: Num of nodes (size_t)
 */

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
		return (0);

	for (count = 1; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->nlen, h->str);

		/* assign new node */
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (count);
}
