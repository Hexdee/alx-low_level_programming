#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a list_t type linked list
 * @head: pointer to the head of the list
 * @str: str of the new element
 *
 * Return: pointer to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!new || !str)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	*head = new;
	return (new);
}
