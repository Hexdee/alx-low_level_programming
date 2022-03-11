#include <stdio.h>
/**
*main - entry point, print the alphabets
*with only two putchar()s
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 122;
	while(i > 96)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
