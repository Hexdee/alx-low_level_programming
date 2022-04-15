#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings with a separator
 * @separator: the separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int i;
	char *str;

	va_start(strs, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(strs, char *);
		printf("%s", str ? str : "(nil)");
		printf("%s", separator ? separator : "");
	}

	printf("%s\n", va_arg(strs, char *));
}
