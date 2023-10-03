#include "main.h"
#include <stddef.h>
/**
 * create_array - check the code for Holberton School students.
 * @size: argument for size of the array
 * @c: argument for char
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i;

	i = 0;

	my_array = malloc(size * sizeof(c));

	if (my_array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
