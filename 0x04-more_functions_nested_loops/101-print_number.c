#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed.
 */

void print_number(int n)
{
	unsigned int i, m;

	if (n >= 0)
		m = n;
	else
	{
		m = n * -1;
		_putchar('-');
	}
	for (i = 1; i * 10 < m; i *= 10)
		;
	while (i > 0)
	{
		_putchar(m / i + '0');
		m %= i;
		i /= 10;
	}
}
