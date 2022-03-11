#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (int i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');
}
