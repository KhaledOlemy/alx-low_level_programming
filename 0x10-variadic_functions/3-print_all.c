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
	int i = 0, flag;
	char *temp;
	va_list item;

	va_start(item, format);
	while (!format && format[0] != '\0')
	{printf("\n");
		return; }
	while (format[i] != '\0')
	{
		flag = 0;
		switch (format[i])
		{
		case 'i':
			printf("%d", va_arg(item, int));
			break;
		case 'c':
			printf("%c", va_arg(item, int));
			break;
		case 's':
			temp = va_arg(item, char*);
			if (!temp)
			{
				temp = "(nil)";
			}
			printf("%s", temp);
			break;
		case 'f':
			printf("%f", va_arg(item, double));
			break;
		default:
			flag = 1;
			break;
		}
		i++;
		if (format[i] != '\0' && flag == 0)
			printf(", ");
	}
	printf("\n");
	va_end(item);
}
