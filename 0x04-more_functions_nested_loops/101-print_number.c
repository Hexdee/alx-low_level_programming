#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed.
 */

void print_number(int n)
{
	long int i;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	for (i = 1; i * 10 < n; i *= 10)
		;
	while (i > 0)
	{
		_putchar(n / i + '0');
		n %= i;
		i /= 10;
	}
}
