#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	int n;
	int result;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d", result);
	printf("\n");
	return (0);
}
