#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - initialize a variable of type struct dog.
  * @d: the dog to be initialized.
  * @name: the first member of the structure to be initialized.
  * @age: the second member of the structure to be initialized.
  * @owner: the third member of the structure to be initialized.
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
