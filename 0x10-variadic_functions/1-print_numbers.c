#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers separated by @separator
 * @separator: the separator between items
 * @n: number of arguments to be printed out
 * @...: variable-numbered arguments to be entered
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list item;
	unsigned int i;
	char *alt;

	if (separator == NULL)
	{
		alt = "";
	}
	else
	{
		alt = (char *)separator;
	}
	va_start(item, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(item, int));
		if (i != n - 1)
		{
			printf("%s", alt);
		}
	}
			printf("\n");
	va_end(item);
}
