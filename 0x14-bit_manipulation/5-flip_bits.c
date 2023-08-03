/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (m == n)
		return (0);
	return (((m & 1) ^ (n & 1)) + flip_bits(m >> 1, n >> 1));
}
