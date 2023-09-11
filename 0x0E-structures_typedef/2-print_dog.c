#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the content of a struct type dog variable
 * @d: the variable to print its content
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name != NULL)
		printf("Name: %s\n", (*d).name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", (*d).age);
	if ((*d).owner != NULL)
		printf("Owner: %s\n", (*d).owner);
	else
		printf("Owner: (nil)\n");
}
