#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list_t list
 * @head: pointer to the first element of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
