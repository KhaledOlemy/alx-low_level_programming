#include <stdlib.h>
#include "dog.h"
/**
 * _strlen- this function gets the length of a string
 * @s: this is the input character
 * Return: length of input string.
 */
int _strlen(char *s)
{
	int out = 0;

	while (s[out] != '\0')
	{
		out += 1;
	}
	return (out);
}

/**
 * _strcpy- this function just behaves like strcpy
 * @dest: this is the destination for the string to be copied into
 * @src: this is the source string to be copied
 * Return: printed string of destination
 */
char *_strcpy(char *dest, char *src)
{
	int length, i;

	length = _strlen(src);
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[length] = '\0';
	return (dest);
}

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
	int l1, l2;
	dog_t *doggo;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	doggo = malloc(sizeof(dog_t));
	if (!doggo)
	{
		free(doggo);
		return (NULL);
	}
	doggo->name = malloc(l1 * sizeof(char));
	if (!doggo->name)
	{
		free(doggo);
		free(doggo->name);
		return (NULL);
	}
	doggo->owner = malloc(l2 * sizeof(char));
	if (!doggo->owner)
	{
		free(doggo);
		free(doggo->name);
		free(doggo->owner);
		return (NULL);
	}

	if (!doggo->name || !doggo->owner || !doggo)
	{
		return (NULL);
	}
	_strcpy(doggo->name, name);
	_strcpy(doggo->owner, owner);
	doggo->age = age;
	return (doggo);
}
