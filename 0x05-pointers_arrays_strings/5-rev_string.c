#include <string.h>
/**
 * rev_string - a function that reverses a string.
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j];
		s[i - j] = temp;
	}
}
