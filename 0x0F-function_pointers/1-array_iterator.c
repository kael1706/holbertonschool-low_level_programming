#include "function_pointers.h"
/**
*array_iterator - run a function with the elements of array
*@array: array of numbers
*@size: size of array
*@action: void function (int)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
