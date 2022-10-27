#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculate sum of all the data (n) of a linked list
 * @head : Head of the list
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int add;

	add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
