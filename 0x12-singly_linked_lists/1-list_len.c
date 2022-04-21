#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns to len of a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	for (len = 0; h; len++)
		h = h->next;

	return (len);
}
