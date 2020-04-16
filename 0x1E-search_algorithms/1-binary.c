#include "search_algos.h"
/**
 * binary_search - Searche a value
 * in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element
 * @size: the number of elements in array
 * @value: the value to search
 * Return: the first index with value  matched | -1
 */

int binary_search(int *array, size_t size, int value)
{
	int f_idx = 0, l_idx = 0,
		m = 0, idx = -1,
		i = 0;

	if (array == NULL)
		return (-1);

	l_idx = size - 1;

	while (f_idx <= l_idx && idx == -1)
	{
		printf("Searching in array: ");
		for (i = f_idx; i <= l_idx; i++)
			if (i == l_idx)
			{
				printf("%d\n", array[l_idx]);
				break;
			}
			else
				printf("%d, ", array[i]);

		m = (f_idx + l_idx) / 2;

		if (array[m] == value)
			idx = m;
		else
		{
			if (value < array[m])
				l_idx = m - 1;
			else
				f_idx = m + 1;
		}
	}
	return (idx);
}
