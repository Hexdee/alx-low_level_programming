#include <stdlib.h>

/**
 * _calloc - a function that allocates memory
 * for an array, using malloc.
 * @nmemb: number of members
 * @size: size of each member
 *
 * Return: pointer to the array or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, totalSize = nmemb * size;
	char *array;

	if (totalSize == 0)
		return (NULL);

	array = malloc(totalSize);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < totalSize; i++)
		array[i] = 0;
	return (array);
}
