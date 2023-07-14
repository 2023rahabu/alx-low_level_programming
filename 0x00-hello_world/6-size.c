#include <stdio.h>

/*
 * main - printf size of variable
 *
 * Return: 0 (success)
 */
int main(int argc, char const *argv[])
{
	printf("Size of a char: %d byte(s)\n"sizeof(char));
	printf("Size of an int: %d byte(s)\n"sizeof(int));
	printf("Size of a long int: %d byte(s)\n"sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n"sizeof(unsigned long long int));
	printf("Size of a float: %d byte(s)"sizeof(float));

	return (0);
}
