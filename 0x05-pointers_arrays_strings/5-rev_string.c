#include <string.h>
#include "main.h"
/**
 * rev_string- this function reverses the string
 *
 * @s: this is the input string
 */
void rev_string(char *s)
{
	int i, length, limit;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	limit = (length - 1) / 2;
	for (i = 0; i < limit + 1; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
