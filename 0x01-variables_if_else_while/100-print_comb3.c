#include <stdio.h>
/**
 * main - entry point, prints all possible
 * combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = '0'; j <= '9'; j++)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
