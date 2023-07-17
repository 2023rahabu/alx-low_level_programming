#include<stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
 */
int main(void)
{
	int a;
	int n;
				for (a = 0; a < 10; a++)
				{
				for (n = a + 1; n < 10; n++)
				{
				putchar('0' + a);
				putchar('0' + n);
					if (a != 8 || n != 9)
					{
					putchar(',');
					putchar(' ');
					}
					}
					}
				putchar('/n');
					return (0);
					}
