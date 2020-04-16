#include "search_algos.h"

/**
 * linear_search - search a value
 * in an array of integers using the Linear search algorithm
 * @array: int array
 * @size: the number of elements in array
 * @value: the value to search
 * Return: the first index with value matched | -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t pos = 0;

	if (array == NULL)
		return (-1);

	while (pos < size)
	{
		printf("Value checked array[%li] = [%d]\n",
				pos,
				array[pos]
			);
		if (array[pos] == value)
			return (pos);
		pos++;
	}
	return (-1);
}
