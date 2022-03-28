/**
 * _memset - a function that fills memory with a constant byte.
 * @s: Adress of memory to be filled
 * @b: The constant byte
 * @n: Number of byte o fill
 *
 * Return: address of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
