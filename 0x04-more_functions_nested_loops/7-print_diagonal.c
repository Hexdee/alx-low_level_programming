#include "main.h"

/**
 * print_diagonal - A function that draws a
 * diagonal line on the terminal.
 * @n: length of diagonal line.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		return;
	for (i = 1; i < n; i++)
	{
		j = i;
		while (j > 1)
		{
			_putchar(' ');
			j--;
		}
		_putchar('\\');
		_putchar('\n);
	}
}
