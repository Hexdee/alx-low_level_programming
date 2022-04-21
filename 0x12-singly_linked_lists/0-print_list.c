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
	size_t nodes = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
		nodes++;
	}

	return (nodes);
}
