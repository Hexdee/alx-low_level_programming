#include "main.h"
/**
 * print_last_digit - a function return the last digit of a number
 * @n: number to check the last digit
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int lastNum;

	lastNum = n % 10;
	if (lastNum < 0)
		lastNum = 0 - lastNum;
	_putchar(lastNum + '0');
	return (lastNum);
}
