#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */

int main(void)
{
	int n;
	long long first, second;
	long long next;

	n = 50;
	first = 1;
	second = 2;

	printf("%lld, %lld, ", first, second);

	for (int i = 2; i < n; i++)
	{
		next = first + second;
		printf("%lld", next);

		if (i < n - 1)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}

		first = second;
		second = next;
	}

	return (0);
}
