/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 characters
 *
 * Return: the uint value of b
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int length = 0, multiplier = 1, number = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		length++;

	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			number += multiplier;
		else if (b[i] != '0')
			return (0);
		multiplier *= 2;
	}

	return (number);
}
