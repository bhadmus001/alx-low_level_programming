
#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator -excutes the function given to it on each member of the array
 * @array: array to perform action on
 * @size: sie of the array
 * @action: funtion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if (array == NULL)
		return;
	if (size <= 0)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
