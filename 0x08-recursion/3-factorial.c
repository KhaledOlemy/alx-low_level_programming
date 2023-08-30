/**
 * factorial- this function calculates factorials for functions
 * @n: this input number to calculate factorial for.
 * Return: factorial of n if n >= 0, and -1 if n < 0 to indicate an error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
