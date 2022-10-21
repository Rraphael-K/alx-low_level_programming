#include "list.h"

/**
 * free_list - frees list
 * @head: head of linked list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
