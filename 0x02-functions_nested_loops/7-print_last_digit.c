#include "main.h"
/**
 * print_last_digit - a function return the last digit of a number
 * @n: number to check the last digit
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
