#include <stdio.h>
/**
 * main - entry point
 *
 * Description: a program that prints the sum of
 * even term values of fibonacci series less
 * than 4,000,000
 * Return: Always 0
 */
int main(void)
{
	long int prev1, prev2, nextNum,  sum;

	prev1 = 0;
	prev2 = 1;
	nextNum = 0;
	sum = 0;
	while (nextNum < 4000000)
	{
		nextNum = prev1 + prev2;
		if (nextNum % 2 == 0)
		{
			sum += nextNum;
		}
		prev1 = prev2;
		prev2 = nextNum;
	}
	printf("%lu\n", sum);
	return (0);
}
