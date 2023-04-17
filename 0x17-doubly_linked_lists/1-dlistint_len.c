#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Doubly link liat head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (; h; i++)
		h = h->next;
	return (i);
}
