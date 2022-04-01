#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: a program that multiplies two numbers.
 * @argc: number of cli arguments
 * @argv: a Vector containing the cli arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int product;

	if (argc != 3)
		puts("Error");
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
