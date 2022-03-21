/**
 * rev_string - a function that reverses a string.
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int i, j;
	char temp[] = s;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		s[i - j] = s[j];
	}
}
