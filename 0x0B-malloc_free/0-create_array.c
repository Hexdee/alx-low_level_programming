#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: Array to initialize with
 *
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
