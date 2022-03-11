#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	int j = 97;

	while (j < 103)
	{
		putchar(i);
		j++;
	}
	putchar('\n');
}
