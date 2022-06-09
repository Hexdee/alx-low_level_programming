#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the linked list
 * @idx: index to add element
 * @n: data to add at index
 *
 * Return: address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	if (!h)
		return (NULL);

	tmp = *h;

	if (idx == 1)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->n = n;

	for (; idx && tmp->next; idx--)
		tmp = tmp->next;

	if (idx)
		return (NULL);

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}
