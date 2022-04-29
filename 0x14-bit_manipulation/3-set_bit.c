/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the number in decimal
 * @index: position of the bit to set
 *
 * Return: 1 for success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int one = 1;

	if (index > 64)
		return (-1);

	one <<= index;
	*n |= one;
	return (1);
}
