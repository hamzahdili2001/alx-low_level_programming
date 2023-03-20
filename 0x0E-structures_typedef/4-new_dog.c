#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * and store a copy of name and owner
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: NULL if the function failed
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogPtr;

	dogPtr = malloc(sizeof(dog_t));

	if (dogPtr == NULL)
		return (NULL);

	if (!name)
	{
		free(dogPtr);
		return (NULL);
	}
	if (!owner)
	{
		free(dogPtr);
		return (NULL);
	}
	dogPtr->name = name;
	dogPtr->age = age;
	dogPtr->owner = owner;

	return (dogPtr);
}

