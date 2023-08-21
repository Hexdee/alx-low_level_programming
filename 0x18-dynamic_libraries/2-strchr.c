/**
 * _strchr - a function that locates a character in a string.
 * @s: The string
 * @c: The character
 *
 * Return: Pointer to the character
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);
	return ('\0');
}
