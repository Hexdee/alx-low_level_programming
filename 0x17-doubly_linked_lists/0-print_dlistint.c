#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: doubly linked liat head
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
