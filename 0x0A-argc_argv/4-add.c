#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point
 * Description: a program that adds positive numbers.
 * @argc: args count
 * @argv: the arguments
 *
 * Return: 0 for Success, 1 for Error
 */

int main(int argc, char **argv)
{
	int i, sum = 0, num;
	char *notNum;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &notNum, 10);
		if (*notNum)
		{
			puts("Error");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
