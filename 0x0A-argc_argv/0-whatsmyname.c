#include <stdio.h>
/**
 * main- this function prints its name
 * @argc: this is the number of arguments entered
 * @argv: this is the actual arguments as strings in an array
 * Return: 0, always success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i >= 1)
		{
			break;
		}
		printf("%s", argv[i]);
	}
	return (0);
}
