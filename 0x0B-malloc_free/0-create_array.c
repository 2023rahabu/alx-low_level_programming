#include "main.h"
/**
 *create_array - malloc function
 *@size: size of array
 *@c: character c
 *Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	char *ptArray;
	unsigned int count;

	/* allocating enough space for all array members */
	ptArray = malloc(size * sizeof(char));

	/* put a char c in each of the memory locations */
	for (count = 0; count < size; count++)
	{
		/* assign the char to the specific memory location */
		ptArray[count] = c;
	}
	return (ptArray);
}
