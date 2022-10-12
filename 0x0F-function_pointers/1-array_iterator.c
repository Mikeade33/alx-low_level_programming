#include "function_pointers.h"

/**
 * array_iterator
 * @array: The array
 * @size: Size of the array
 * @action: Pointer to function to be executed.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
