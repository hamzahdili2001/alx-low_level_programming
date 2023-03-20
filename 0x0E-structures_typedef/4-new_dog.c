#include "dog.h"
#include <stdlib.h>
#include <string.h>
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

	dogPtr->name = malloc(strlen(name) + 1);
	if (dogPtr->name == NULL)
	{
		free(dogPtr);
		return (NULL);
	}
	dogPtr->owner = malloc(strlen(owner) + 1);
	if (dogPtr->owner == NULL)
	{
		free(dogPtr->name);
		free(dogPtr);
		return (NULL);
	}

	strcpy(dogPtr->name, name);
	dogPtr->age = age;
	strcpy(dogPtr->owner, owner);
	return (dogPtr);
}

