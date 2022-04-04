#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _stdrup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: pointer to duplicated string.
 */

char *_strdup(char *str)
{
	int i, len;
	char *s = malloc(len + 1);

	if (str == NULL || s == NULL)
		return (NULL);
	len = strlen(str);
	for (i = 0; i <= len; i++)
		s[i] = str[i];
	return (s);
}
