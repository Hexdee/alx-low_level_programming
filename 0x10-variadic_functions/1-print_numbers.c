#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers with a separator
 * @separator: the separator
 * @n: total amount of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		printf("%s", i < n - 1 && separator ? separator : "");
	}

	printf("\n");
	va_end(nums);
}
