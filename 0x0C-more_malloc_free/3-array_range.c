#include <stdlib.h>

/**
 * array_range - a function that creates an array
 * of integers from min to max.
 * @min: start point
 * @max: end point
 *
 * Return: pointer to the array
*/

int *array_range(int min, int max)
{
	int i, len;
	int *array;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		array[i] = min + i;
	return (array);
}
