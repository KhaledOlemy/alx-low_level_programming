#include <stdio.h>
/**
 * main- this function prints the argumets entered including
 * the program name
 * @argc: number of arguments enetered + program name
 * @argv: actual arguments entered
 * Return: 0, always success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
