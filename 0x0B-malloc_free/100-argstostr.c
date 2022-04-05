#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: number of arguments
 * @av: a Vector of the arguments
 *
 * Return: Pointer to the concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, totalLen = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		totalLen += strlen(av[i]);
	/**
	 * Add newlines and null 0
	*/
	totalLen += ac + 1;
	str = malloc(totalLen * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[len + j] = av[i][j];
		str[len + j] = '\n';
		len += j + 1;
	}
	str[totalLen] = '\0';
	return (str);
}
