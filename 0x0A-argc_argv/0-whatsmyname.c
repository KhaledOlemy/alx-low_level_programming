#include <stdio.h>
/**
 * main- this function prints its name
 * @argc: this is the number of arguments entered
 * @argv: this is the actual arguments as strings in an array
 * Return: 0, always success
*/
int main(int argc, char *argv[])
{
	if (argc != 1)
	{
		printf("%s", argv[argc-1]);
	}
	else
	{
		printf("%s", argv[0]);
	}

	return (0);
}
