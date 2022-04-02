#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A program that prints the minimum number of coin
 * to make a change for an amount of money
 * @argc: number of cli arguments
 * @argv: A vector containing cli arguments
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char **argv)
{
	int num, count = 0, i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	num = atoi(argv[1]);
	while (num > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (num >= cents[i])
			{
				num -= cents[i];
				count++;
				break;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
