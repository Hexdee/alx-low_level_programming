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

	while (i < 123)
	{
		printf("%c", i);
		i++;
	}
	printf("\n");
}
