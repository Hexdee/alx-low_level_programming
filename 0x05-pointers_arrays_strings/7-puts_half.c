#include "main.h"

/**
 * puts_half - a function that prints half
 * of a string, followed by a new line.
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	j = i / 2;
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
