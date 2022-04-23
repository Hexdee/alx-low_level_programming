/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: string to check
 * @accept: the byte to check for
 *
 * Return: Number of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
	}
	return (0);
}
