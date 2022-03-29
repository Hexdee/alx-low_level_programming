/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: A pointer to a pointer to be set
 * @to: Pointer to the char to set it to
 */

void set_string(char **s, char *to)
{
	*s = to;
}
