#include "holberton.h"

/**
 * prime_helper - Makes possible to evaluate from 1 to n
 * @i: same number as n
 * @b: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime_helper(int i, int b)
{
	if (i == b)
		return (1);
	else if (i % b == 0)
		return (0);
	return (prime_helper(i, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
