#include "dog.h"
#include <stdlib.h>
/**
* _strdupk - return a pointer with copy
*
* @str: string
* Return: pointer
*/
char *_strdupk(char *str)
{
	char *copyStr;
	int a, b;

	a = 0;
	b = 0;
	if (str == NULL)
		return (NULL);
	while (str[a] != '\0')
		a++;
	copyStr = (char *)malloc((a + 1) * sizeof(char));
	if (copyStr == NULL)
	{
		return (NULL);
	}
	while (str[b] != '\0')
	{
		copyStr[b] = str[b];
		b++;
	}
	copyStr[b] = '\0';
	return (copyStr);
}

/**
* new_dog - create a new obj dog
* @name: string
* @age: float
* @owner: string
* Return: newDog (pointer)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	(*newDog).name = _strdupk(name);
	if ((*newDog).name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	(*newDog).age = age;
	(*newDog).owner = _strdupk(owner);
	if ((*newDog).owner == NULL)
	{
		free((*newDog).name);
		free(newDog);
		return (NULL);
	}
	return (newDog);
}
