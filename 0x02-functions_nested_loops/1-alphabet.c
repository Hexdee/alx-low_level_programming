#include "main.h"
/*
 * print_alphabet - A function that prints the alphabets
 *
 * Description: Funtion that prints the alphabets and a newline
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
