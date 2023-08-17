#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_dnode_at_index - returns the nth node of a dlistint_t linked list
 * @head: the doubly linked list
 * @index: position of element to get
 * Return: pointer to element at index n
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (;index && head->next; index--)
		head = head->next;

	if (index)
		printf("%u", index);

	return (head);
}
