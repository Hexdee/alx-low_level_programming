#include <stddef.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: string to search
 * @needle: stirng to search for
 *
 * Return: Pointer to first occurence or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == '\0' || needle[j] != haystack[i + j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
