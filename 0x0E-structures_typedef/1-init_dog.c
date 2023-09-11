#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct var
 * @name: name to be put in struct
 * @age: age to be put in struct
 * @owner: owner to be put in struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
