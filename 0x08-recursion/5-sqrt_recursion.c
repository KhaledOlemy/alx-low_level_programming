/**
 * get_sqrt- this is a sub-function to help _sqrt_recursion
 * get the square_root of a value
 * @i: this is the input number
 * @j: this is the number of times numbers deducted (sqrt value)
 * Return: square_root if exist, -1 if not.
 */
int get_sqrt(int i, int j)
{
	if (i == 0)
	{
		return (j + 1);
	}
	if (i < 0)
	{
		return (-1);
	}
	return (get_sqrt(i - (1 + (2 * (j + 1))), j + 1));
}
/**
 * _sqrt_recursion- this is the main function to calculate square_root
 * It depends on "Repeated Subtraction Method"
 * @n: this is the input number
 * Return: square_root if exist, -1 if not.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (get_sqrt(n, -1));
}
