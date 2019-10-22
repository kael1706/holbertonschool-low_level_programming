#include "dog.h"
#include <stdlib.h>
/**
*free_dog - creates a new object dog
* @d: release object properties
*/

  void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
