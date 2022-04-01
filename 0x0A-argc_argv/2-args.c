#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints all arguments
 * it receives.
 * @argc: number of command line arguments
 * @argv: a Vector containing the cli arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
