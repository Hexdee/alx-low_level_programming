/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to function to compare values
 *
 * Return: the index of the interger or -1 if no match found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array && cmp) || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
