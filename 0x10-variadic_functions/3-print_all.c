#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list *);
void print_int(va_list *);
void print_float(va_list *);
void print_string(va_list *);

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
	void (*print_next)(va_list *);

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == fmt[j].c)
			{
				if (i > 0)
					printf(", ");
				print_next = fmt[j].p;
				print_next(&args);
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
 * @p: pointer to v_list
 */
void print_char(va_list *p)
{
	char c = va_arg(*p, int);

	printf("%c", c);
}

/**
 * print_int - prints int
 * @p: pointer to v_list
 */
void print_int(va_list *p)
{
	int i = va_arg(*p, int);

	printf("%i", i);
}

/**
 * print_float - prints float
 * @p: pointer to v_list
 */
void print_float(va_list *p)
{
	float f = va_arg(*p, double);

	printf("%f", f);
}

/**
 * print_string - prints string
 * @p: pointer to v_list
 */
void print_string(va_list *p)
{
	char *s = va_arg(*p, char *);

	printf("%s", s ? s : "(nil)");
}
