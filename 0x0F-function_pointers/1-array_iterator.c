/**
*array_iterator - run a function with the elements of array
*@array: array of numbers
*@size: size of array
*@action: void function (int)
*/
array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
