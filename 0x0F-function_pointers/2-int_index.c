

#include "function_pointers"
/**
 * int_index - searches for an integer
 * @array: array to perform action on
 * @size: sie of the array
 * @cmp: funtion pointer
 * Return: return the index of an array or -1
 */
int int_index(int *array, int  size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
