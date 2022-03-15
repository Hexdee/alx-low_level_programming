#include "main.h"
/**
 * print_alphabet_x10  - A function that prints the alphabets 10 times
 *
 * Description: Funtion that prints the alphabets
 * 10 times and a newline after each
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
