/**
 * swap_int- this function swaps inputs
 * @a: this is input 1's address
 * @b: this is input 2's address
 * void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
