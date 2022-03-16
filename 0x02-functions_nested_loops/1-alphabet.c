#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet,
 *
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
