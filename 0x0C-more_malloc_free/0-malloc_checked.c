#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: size of memory to allocate
 * Returns: Pointer to the address
*/

void *malloc_checked(unsigned int b)
{
	char *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
