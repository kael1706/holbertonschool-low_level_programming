array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while(i<size)
	{
		action(array[i]);
		i++;
	}
}
