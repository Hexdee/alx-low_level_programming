#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates
 * two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: numbwr of bytes to copy
 *
 * Return: Pointer to concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *str;

	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);
	n = n > l2 ? l2 : n;
	str = malloc(sizeof(char) * (l1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0; i < n; i++)
		str[l1 + i] = s2[i];
	str[l1 + i] = '\0';
	return (str);
}
