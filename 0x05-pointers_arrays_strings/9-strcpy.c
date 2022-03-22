#include "main.h"

/**
 * _strcpy - a function that copies  string.
 * @src: string to be copied
 * @dest: destination
 * Return: Address of desc
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
