#include "dog.h"
#include<stdio.h> 
/**
* print_dog - print info of dog
* @d: address type dog
*/
void print_dog(struct dog *d)
{
	if (d)
	{
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", (*d).name);
	if ((*d).name == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", (*d).owner);
	}
}
