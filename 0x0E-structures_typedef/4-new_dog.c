#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - this function creates and initializes a
 * variable of struct type dog, and initializes it w
 * ith values, and returns a pointer to the declared
 * variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the newly made struct var
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		{return (NULL); }
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
