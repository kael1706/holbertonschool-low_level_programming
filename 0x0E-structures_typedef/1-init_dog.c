#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: address of pointer
* @name: string
* @age: int
* @owner: string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
