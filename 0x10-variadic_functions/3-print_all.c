#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of all types of arguments
 */

void print_all(const char * const format, ...)
{
	fp fmt[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	va_list args;
	int i = 0, j = 0;
	char *sp = "";

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == fmt[j].c)
			{
				printf("%s", sp);
				fmt[j].p(args);
				sp = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_char - prints a character
 * @p: v_list
 */
void print_char(va_list p)
{
	printf("%c", va_arg(p, int));
}

/**
 * print_int - prints int
 * @p: v_list
 */
void print_int(va_list p)
{
	printf("%i", va_arg(p, int));
}

/**
 * print_float - prints float
 * @p: v_list
 */
void print_float(va_list p)
{
	printf("%f", va_arg(p, double));
}

/**
 * print_string - prints string
 * @p: v_list
 */
void print_string(va_list p)
{
	char *s = va_arg(p, char *);
	if (!s)
	{
		printf("%s", "(nill)");
		return;
	}
	printf("%s", s);
}
