#include "main.h"
#include <stdio.h>
/**
* reverse_array - function that reverse integer array
* @a: parameter taken by the function
* @n: second parameter
* return: 0 success
*/
void reverse_array(int *a, int n)
{
	int i,j;

	j = 0;
	i = n - 1;

	if (n <= 1 || a == NULL)
	{
		return;
	}
	while (i > j)
	{
		int temp;
		temp = a[j];
		a[j] = a[i];
		a[i] = temp;

		j++;
		i--;
	}
}
