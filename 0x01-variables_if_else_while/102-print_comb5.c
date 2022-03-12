#include <stdio.h>

/**
 *main - Entry Point
 *
 *Return: Always 0 for success
 *
 */
int main(void)
{
	int i, j, k, l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = i;
			while (k <= '9')
			{
				if (i == k)
					l = j + 1;
				else
					l = '0';
				l = '0';
				while (l < '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j == '8' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
