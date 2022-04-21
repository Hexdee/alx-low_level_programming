#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all element of a list_t type linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while(h)
	{
		printf("[%d] ", h->str ? h->len : 0);
		printf("%s\n", h->str ? h->str : "(nil)");
		h = h->next;
		nodes++;
	}

	return (nodes);
}
