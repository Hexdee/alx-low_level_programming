#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		printf("%c", i);
		i++;
	}

	while (j < 91)
	{
		printf("%c", j);
		j++;
	}
	printf("\n");
	return (0);
}
