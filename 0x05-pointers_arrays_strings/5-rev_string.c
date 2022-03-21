#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	char temp[i];
	for (j = 0; j <= i; j++)
	{
		temp[i] = s[i];
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		s[j] = temp[i - j];
}
