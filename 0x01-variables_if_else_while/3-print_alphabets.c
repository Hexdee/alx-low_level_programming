#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = 97; i < 123; i++)
	{
		printf("%c", i);
	}
	for (int j = 65; j < 90; j++)
	{
		printf("%c", j);
	}
	printf("\n");
}
