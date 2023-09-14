#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints different types of data
 * handled all by same function
 * @format: the format of the entered arguments of the
 * variadic function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *temp, *separator;
	va_list item;

	separator = "";
	va_start(item, format);
	if (!format')
	{ return; }
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'i':
			printf("%s%d", separator, va_arg(item, int));
			separator = ", ";
			break;
		case 'c':
			printf("%s%c", separator, va_arg(item, int));
			separator = ", ";
			break;
		case 's':
			temp = va_arg(item, char*);
			if (!temp)
			{
				temp = "(nil)";
			}
			printf("%s%s", separator, temp);
			separator = ", ";
			break;
		case 'f':
			printf("%s%f", separator, va_arg(item, double));
			separator = ", ";
			break;
		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(item);
}
