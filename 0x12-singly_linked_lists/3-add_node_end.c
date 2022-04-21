#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element in the list
 * @str: str for the new element
 *
 * Return: pointer to str
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *nodep = *head;

	while (*head && nodep->next)
		nodep = nodep->next;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	if (*head)
		nodep->next = new;
	else
		*head = new;

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	return (new);
}
