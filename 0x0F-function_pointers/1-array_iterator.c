#include "function_pointers.h"
/**
 *array_iterator - function that execute function
 *@array: parameter array
 *@size: size of array
 *@action: function parameter
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL && size != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
