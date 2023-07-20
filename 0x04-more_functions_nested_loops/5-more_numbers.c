#include "main.h"
/**
 * more_numbers - print 0 to 14 ten times
 * Retrurn: 0 success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
			_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
