#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @name: variable
 * @age: variable
 * @owner: variable
 * @d: pointer variable
 * Description: variables typedef
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
