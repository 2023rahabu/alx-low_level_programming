#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: parameter to be swaped
 * @b: parameter to be swaped
 * Return: 0 success
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
