#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the number of
 * arguments passed into it.
 * @argc: number of cli arguments
 * @argv: a vector that contains the cli arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
