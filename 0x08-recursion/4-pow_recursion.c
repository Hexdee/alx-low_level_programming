/**
 * _pow_recursion - a function that returns
 * the value of x raised to the power of y.
 * @x: The number
 * @y: The power
 *
 * Return: The result or -1 for error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
