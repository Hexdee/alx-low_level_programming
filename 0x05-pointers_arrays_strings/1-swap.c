/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: pointer to interger 1
 * @b: pointer to integer 2
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
