#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, last, first;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			last = (i * j) % 10;
			first = (i * j) /10;
			if (j > 0 && first == 0)
				_putchar(' ');
			else
				_putchar(first + '0');
			_putchar(last + '0');
			if (j == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
}
