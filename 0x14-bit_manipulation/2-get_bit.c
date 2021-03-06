/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer
 * @index: bit index
 * Return: index at position of index
 */


int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;

	return (n & 1);
}
