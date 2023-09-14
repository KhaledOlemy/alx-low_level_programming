#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings separated by a @separator
 * @separator: separator of strings
 * @n: number of arguments to be printed
 * @...: actual strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list item;
	unsigned int i;
	char *alt, *temp;

	if (separator == NULL)
	{
		alt = "";
	}
	else
	{
		alt = (char *) separator;
	}
	va_start(item, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(item, char*);
		if (temp != NULL)
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}
		if (i != n - 1)
		{
			printf("%s", alt);
		}
	}
	printf("\n");
	va_end(item);
}
