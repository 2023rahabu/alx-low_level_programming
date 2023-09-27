#include "main.h"
/**
 *_sqrt_help - helper function
 *@k: parameter
 *@sqt: parameter
 *Return: 0
 */
int _sqrt_help(int k, int sqt)
{
	if (sqt * sqt == k)
		return (sqt);
	else if (sqt * sqt > k)
		return (-1);
	return (_sqrt_help(k, sqt + 1));
}
/**
 *_sqrt_recursion - recursion function
 *@n: parameter
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}
