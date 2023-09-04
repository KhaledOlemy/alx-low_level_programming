#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr- this function concatenates argv
 * passed through pointers to strings
 * @ac: this is argc
 * @av: this is argv
 * Return: pointer to string
*/
char *argstostr(int ac, char **av)
{
	int i = 1, j, k = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = malloc(100 * ac);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	return (ptr);
}
