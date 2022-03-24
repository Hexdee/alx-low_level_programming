
/**
 * cap_string - a function that capitalizes
 * all words of a string.
 * @s: string to be capitalized
 * Return: address of s
 */

char *cap_string(char *s)
{
	int i, j, f;
	char seps[] = {' ', '\t', '\n', ',', ';',
	     '.', '!', '?', '"', '(', ')', '{', '}'};

	f = 'A' - 'a';
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] += f;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] += f;
			}
		}
	}
	return (s);
}
