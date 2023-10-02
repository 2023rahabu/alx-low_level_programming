#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints multply of 2 number.
 * @argc: number of arguments
 * @argv: array with the arguments
 *
 * Return: always 0
 **/

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		result = a * b;

		printf("%d\n", result);
	}
	else
	{
		printf("%s\n","Error");
		return 1;
	}
	return 0;
}
