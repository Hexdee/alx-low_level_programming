/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: the number
 * @index: position of bit to get
 *
 * Return: value of bit at index 'index'
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
