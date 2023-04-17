#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer element
 * @name: init element
 * @age: init element
 * @owner: init element
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
