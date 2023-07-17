#include<stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	int n;
	int k;

		for (a = 0; a < 10; a++)
		{
			for (n = a + 1; n < 10; n++)
			{
				for (k = n + 1; k < 10; k++)
				{
					putchar('0' + a);
					putchar('0' + n);
					putchar('0' + k);
		if (a != 7 || n != 8 || k != 9)
			{
			putchar(',');
			putchar(' ');
					}
				}
			}
		}
		putchar('\n');
			return (0);
		}
