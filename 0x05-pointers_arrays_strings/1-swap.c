/**
 * swap_int - swaps the values of two ints
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
