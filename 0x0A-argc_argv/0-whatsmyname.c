#include <stdio.h>
/**
 * main- this function prints its name
 * @argc: this is the number of arguments entered (unused)
 * @argv: this is the actual arguments as strings in an array
 * Return: 0, always success
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	return (0);
}
