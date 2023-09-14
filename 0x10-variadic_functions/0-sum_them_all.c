#include <stdarg.h>
/**
 * sum_them_all - sums entered arguments
 * @n: number of arguments to be summed.
 * @...: actual numbers to be summed
 * Return: sum of the number eneterd
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list item;
	int i, sum = 0;

	va_start(item, n);
	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(item, int);
	}
	va_end(item);
	return (sum);
}
