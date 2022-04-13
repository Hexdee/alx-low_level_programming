#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: A program that performs simple operations
 * @argc: Number of cli arguments
 * @argv: Vector of cli arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int (*op)(int, int);
	int num1, num2;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		puts("Error");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		puts("Error");
		exit(100);
	}

	op = get_op_func(argv[2]);
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", op(num1, num2));

	return (0);
}
