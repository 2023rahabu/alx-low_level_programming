#include <stdio.h>
/**
 * main - entry point
 * @argc: arguments passed
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; argc > i; i++)
		printf("%s\n", argv[i]);
	return (0);
}
