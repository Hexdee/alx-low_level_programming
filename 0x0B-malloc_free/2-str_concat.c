#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, l1 = strlen(s1), l2 = strlen(s2);
	char *str = malloc(l1 + l2 + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0; i < l2; i++)
		str[l1 + i] = s2[i];
	return (str);
}
