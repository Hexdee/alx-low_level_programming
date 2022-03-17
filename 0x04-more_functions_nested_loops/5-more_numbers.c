#include "main.h"

/**
 * more_numbers - a function that prints 10 times
 * the numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, j;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = '0';
		for (i = 0; i < 14; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(c);
			if (c == '9')
				c = '0';
			c++;
		}
	}
}

