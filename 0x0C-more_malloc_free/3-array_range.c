#include <stdlib.h>

/**
* array_range - array of integers.
* @min: start of array
* @max: end of array
* Return: pointer of array
*/
int *array_range(int min, int max)
{
	int *space;
	int i, l;

	if (min > max)
		return (NULL);

	l = max - min;

	space = malloc(sizeof(int) * (l + 1));

	if (space == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= l; i++)
	{
		space[i] = min;
		min++;
	}
	return (space);
}
