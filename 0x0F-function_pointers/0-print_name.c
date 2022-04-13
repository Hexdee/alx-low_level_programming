/**
 * print_name - prints a name
 * @name: The name to print
 * @f: Function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
