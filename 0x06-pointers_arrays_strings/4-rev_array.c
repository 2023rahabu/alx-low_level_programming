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
	int i;

	i = n - 1;

	if (n <= 1 || a == NULL)
	{
		return;
	}
	while (i > 0)
	{
		printf("%d, ", a[i]);
		i--;
	}
	printf("%d\n", a[0]);
}
