#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints its name,
 * followed by a new line.
 * @argc: number of cli arguments
 * @argv: a Vector that stores the cli arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
