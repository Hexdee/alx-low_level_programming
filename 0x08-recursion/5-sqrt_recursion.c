/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: The number
 * Return: The square root or -1 if no square root
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if(i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - a function that returns
 *the natural square root of a number.
 * @n: The number
 * Return: The square root or -1 if no square root
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
