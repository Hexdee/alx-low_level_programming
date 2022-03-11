#include <stdio.h>
/**
 * main - entry point, prints all possible
 * combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = '0'; j <= '9'; j++)
		{
			for (int k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == '7' && j == '8' && k == '9')
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
