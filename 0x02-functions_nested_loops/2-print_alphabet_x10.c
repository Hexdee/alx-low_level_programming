#include "main.h"
/*
 * print_alphabet_x10  - A function that prints the alphabets 10 times
 *
 * Description: Funtion that prints the alphabets 10 times and a newline after each
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
