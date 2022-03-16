#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that finds and prints
 * the first 98 Fibonacci numbers, starting
 * with 1 and 2, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long int prev1, prev2, nextNum;

	prev2 = 0;
	prev1 = 1;
	for (i = 0; i < 98; i++)
	{
		nextNum = prev1 + prev2;
		if (i == 97)
			printf("%lu", nextNum);
		else
			printf("%lu, ", nextNum);
		prev2 = prev1;
		prev1 = nextNum;
	}
	printf("\n");
	return (0);
}
