/**
*int_index - run a function with the elements of array
*@array: array
*@size: size of array
*@cmp: int function (int)
*
*Return: good -> index, else -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp && array)
	{
		while (i < size)
		{
		int resp = cmp(array[i]);

		if (resp)
		{
			return (i);
		}
			i++;
		}
	}
	return (-1);
}
