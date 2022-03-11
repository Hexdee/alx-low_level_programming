#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
*main - entry point, check the last digit of a
*random variable, n if it's greater than 5,
*equal to 0 or less than 6
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = abs(n % 10);
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
