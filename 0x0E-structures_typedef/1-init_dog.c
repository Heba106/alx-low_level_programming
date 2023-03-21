#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize
  * @d: point
  * @name: name
  * @age: age
  * @owner: owner
  * Return: pointer
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
