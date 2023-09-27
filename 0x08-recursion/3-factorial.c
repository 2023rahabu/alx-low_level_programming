#include "main.h"
/**
 *factorial - function that returns the facorial of a given number
 *@n: parameter
 *Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}

