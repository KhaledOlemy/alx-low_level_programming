/**
 * is_it_prime- this is a sub-function for judging if it's prime or not
 * @n: input number
 * @j: numbers to iterate through judging
 * Return: 1 if prime, 0 if not.
 */
int is_it_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0)
	{
		return (0);
	}
	return (is_it_prime(n, j - 1));
}

/**
 * is_prime_number- this function checks for prime numbers
 * @n: input number
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_it_prime(n, n - 1));
}
