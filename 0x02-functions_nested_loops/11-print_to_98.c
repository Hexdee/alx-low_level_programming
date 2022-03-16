#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: the number to start from
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d ", n);
		if (n < 0)
			n++;
		else
			n--;
	}
	printf("%dvim\n", 98);
}
