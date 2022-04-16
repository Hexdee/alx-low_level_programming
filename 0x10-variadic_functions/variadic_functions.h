#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_all(const char * const format, ...);

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * struct fp - function for control characters
 * @c: the character
 * @p: pointer function
 */

typedef struct fp
{
	char c;
	void (*p)(va_list);
} fp;

#endif
