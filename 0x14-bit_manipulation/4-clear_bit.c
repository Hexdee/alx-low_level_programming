/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the integer
 * @index: position of bit to clear
 *
 * Return: 1 if successful l, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int one = 1;

	if (index > 63)
		return (-1);

	one <<= index;
	if (*n & one)
		*n ^= one;
	return (1);
}
