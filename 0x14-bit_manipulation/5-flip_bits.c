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
	unsigned int diff;
	int count = 0;

	diff = n ^ m;
	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
