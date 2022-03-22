#include <studio h>

/**
 * print_array - function that prints n
 * elements of an array of integers,
 * followed by a new line.
 * @a: the array
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[n]);
		else
			printf("%d, ", a[n]);
	}
	printf("\n");
}
