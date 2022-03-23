/**
 * reverse_array - a function that reverses
 * the content of an array of integers.
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	n--;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
