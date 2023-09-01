#include <stdio.h>
/**
 * main- this function prints the number of arguments entered
 * @argc: this is the number of arguments eneterd + program_name
 * @argv: the actual attributes entered.
 * Return: 0, always success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
