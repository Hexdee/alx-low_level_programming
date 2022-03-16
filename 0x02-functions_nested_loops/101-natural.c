#include <stdio.h>
/**
 * main - entry point
 *
 * Description: computes all multiples
 * of 3 or 5 below 1024 and prints the sum.
 * Return: Always 0
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
