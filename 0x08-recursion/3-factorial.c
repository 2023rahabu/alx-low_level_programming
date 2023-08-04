#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: parameter
 * Return: -1 n is lower than 0 and 1 for factrial of 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
