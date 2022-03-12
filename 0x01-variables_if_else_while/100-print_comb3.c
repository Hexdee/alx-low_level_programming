#include <stdio.h>
/**
 * main - entry point, prints all possible
 * combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
