#include "main.h"

/**
 * get_endianness - get the endianness of the machine
 * Return: 0 if Bing, 1 if small
 */
int get_endianness(void)
{
	int num = 1;

	if ((*(char *) &num) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
