/**
 * clear_bit - set the value of a bit to 0 at a given index
 *
 * @n: the number
 * @index: position of bit to set to 0
 *
 * Return: value of bit at index 'index'
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
