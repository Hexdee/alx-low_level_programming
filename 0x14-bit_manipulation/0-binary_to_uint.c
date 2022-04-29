/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of binary digits
 * Return: decimal representation
 */

unsigned int binary_to_uint(const char *b)
{
	int len, num = 0, mul = 1;

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	len--;
	while (b[len])
	{
		num += (b[len] - '0') * mul;
		mul *= 2;
		len--;
	}
	return (num);
}
