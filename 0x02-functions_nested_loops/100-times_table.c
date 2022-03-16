#include "main.h"
/**
 * print_times_table - a function that
 * prints the n times table, starting with 0.
 * @n: the number of tines table to be printed
 */
void print_times_table(int n)
{
	int i, j, first, second, third;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			first = (i * j) / 100;
			second = ((i * j) / 10) % 10;
			third = (i * j) % 10;
			/*
			 * To add the extra spaces in front
			 * of numbers less than three digits
			 * and is not at the beginning of a line
			 */
			if (j > 0)
			{
				if ((i * j) < 100)
					_putchar(' ');
				else
					_putchar(first + '0');
				if ((i * j) < 10)
					_putchar(' ');
				else
					_putchar(second + '0');
			}
			_putchar(third + '0');
			if (j == n)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
