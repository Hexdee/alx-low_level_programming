/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * @s: the string
 * Return: address of s
 */

char *string_toupper(char *s)
{
	int i, f;

	f = 'A' - 'a';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += f;
	}
	return (s);
}
