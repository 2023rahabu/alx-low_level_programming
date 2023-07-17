#include<stdio.h>
/**
 * main - Entry point
 * Return: 0(success)
 */
int main(void)
{
	char c;

	c = 'z';
		while (c <= 122 && c >= 97)
		{
			putchar(c);
			c = c - 1;
		}
		putchar('\n');
		return (0);
}
