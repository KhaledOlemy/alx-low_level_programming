#include <stdio.h>
/**
 * main- this program prints out the filename that it was ran from
 * Return: 0, always success
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
