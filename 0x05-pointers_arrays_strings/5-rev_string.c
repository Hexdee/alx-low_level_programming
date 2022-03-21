/**
 * rev_string - a function that reverses a string.
 * @s: string to be reverse
 */

void rev_string(char *s)
{
	int i, j;
	char *temp;

	i = 0;
	temp = s;
	while (s[i] != '\0')
	{
		temp[i] = s[i];
		i++;
	}
	i--;
	for (j = 0; j <= i; j++)
	{
		s[i - j] = temp[j];
	}
}
