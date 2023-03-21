#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - create new dog
 * @name: char variable
 * @age: int variable
 * @owner: char variable
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd->name = malloc(strlen(name + 1));
	if (nd->name == NULL)
	{
		free(nd->name);
		free(nd->owner);
		free(nd);
		return (NULL);
	}
	nd->age = age;
	nd->name = strdup(name);
	nd->owner = strdup(owner);

	return (nd);
}

