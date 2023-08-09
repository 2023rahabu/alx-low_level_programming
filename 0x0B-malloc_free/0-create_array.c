#include "main.h"
/**
 * create_array - function that create an array of chars
 * @size : size of element
 * @c: character c
 * Return: NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int count;

	if (size <= 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		array[count] = c;
	}
	return (array);
}
