#include "main.h"

/**
 * print_triangle - a function that prints a
 * triangle, followed by a new line.
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - j <= i)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
