#include "main.h"
/**
 *array_range - function that creates an array integers
 *@min: minumum integer
 *@max: maximum integer
 *Return: pointer to new allocated array
 */
int *array_range(int min, int max)
{
	int *range;
	int i;
	int size_array;

	if (min > max)
	{
		return (NULL);
	}

	size_array = max - min + 1;

	range = malloc(size_array * sizeof(int));

	if (range == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_array; i++)
	{
		range[i] = min + i;
	}
	return (range);
}



