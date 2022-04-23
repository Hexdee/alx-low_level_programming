#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: the string
 *
 * Returns: Pointer to the characters of the string
 */

char **strtow(char *str)
{
	int i = 0, wordCount = 0, len = strlen(str);
	char *word;
	char **words;

	if (s[0] != ' ')
		wordCount++;
	for (i = 0; i < len - 1; i++)
	{
		if (str[i] == ' ')
			wordCount++;
	}
	words = (char **)malloc(wordCount * sizeof(char *));
	do
	{
		word = (char *)malloc( * sizeof(
		i++;
	}
	while (i < strlen(str));
	return (words)
}
