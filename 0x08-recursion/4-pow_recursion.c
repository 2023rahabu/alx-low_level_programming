#include "main.h"
/**
 * _pow_recursion - function that returs the value of x power y
 * @x: parameter 1
 * @y: parameter 2
 * Return: 0 success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
