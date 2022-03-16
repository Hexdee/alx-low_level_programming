#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the
 * first 50 fibonacci numbers.
 * Return: Always 0
 */
int main(void)
{
	int i;
	long int prev1, prev2, nextNum;

	prev1 = 0;
	prev2 = 1;
	for (i = 0; i < 50; i++)
	{
		nextNum = prev1 + prev2;
		if (i == 49)
			printf("%lu", nextNum);
		else
			printf("%lu, ", nextNum);
		prev1 = prev2;
		prev2 = nextNum;
	}
	printf("\n");
	return (0);
}
