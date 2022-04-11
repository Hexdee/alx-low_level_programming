#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the name of the file it was compile from
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
