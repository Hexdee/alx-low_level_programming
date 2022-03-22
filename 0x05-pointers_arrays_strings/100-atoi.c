#include "main.h"

/**
 * _atoi - a function that convert a
 * string to an integer.
 * @s: string to be converted
 * Return: the integer or 0 if no number
 */

int _atoi(char *s)
{
	int i, sign;
	unsigned int num;

	sign = 1;
	num = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num *= 10;
			num += s[i] - '0';
		}
		else if (num)
			break;
		else if (s[i] == '-')
			sign *= -1;
	}
	return (num * sign);
}
