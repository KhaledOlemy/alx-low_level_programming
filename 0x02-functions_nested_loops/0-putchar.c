#include <stdio.h>
#include <string.h>
#include "main"

/**
 * main- this prints the word _putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char *val = "_putchar";

	for (i = 0; i < strlen(val); i++)
	{
		putchar(val[i]);
	}
	putchar('\n');
	return (0);
}
