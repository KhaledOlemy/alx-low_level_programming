#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * main- this prints the word _putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char *val = "_putchar";
	int sizeval = strlen(val);
	for (i = 0; i < sizeval; i++)
	{
		_putchar(val[i]);
	}
	putchar('\n');
	return (0);
}
