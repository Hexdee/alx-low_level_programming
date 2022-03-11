#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
}
