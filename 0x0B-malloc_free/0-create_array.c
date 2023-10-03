#include "main.h"
/**
*create_array - malloc function
*@size: size of array
*@c: character c
*Return: Nothing
*/
char *create_array(unsigned int size, char c)
{

	char *ptr = malloc(size * sizeof(char));

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
