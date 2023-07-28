#include "main.h"
#include <stdio.h>
/**
* reverse_array - function that reverse integer array
* @a: parameter taken by the function
* @n: second parameter
* return: 0 integer
*/
void reverse_array(int *a, int n)
{
	int j;

	j = n - 1;
	while (j >= 0)
	{
		if (j != n - 1)
		{
		printf(",");
		}
	printf("%d", a[j]);
	j--;
	}
	printf("\n");
	}
