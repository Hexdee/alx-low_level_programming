#include <stdio.h>
/**
 * main - entry point, prints all possible
 * combinations of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		int j = '0';

		while (j <= '9')
		{
			int k = '0';

			while (k <= '9')
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
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
}
