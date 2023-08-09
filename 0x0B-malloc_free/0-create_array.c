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

	array = malloc(size * sizeof(char));

	for (count = 0; count < size; count++)
	{
		if (array == NULL)
		{
			return (NULL);
		}
		array[count] = c;
	}
	return (array);
}
